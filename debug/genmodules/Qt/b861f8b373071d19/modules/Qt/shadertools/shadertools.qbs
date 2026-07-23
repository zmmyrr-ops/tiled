import "shadertools.js" as ShaderTools

QtModule {
    qtModuleName: "ShaderTools"

    additionalProductTypes: ["qt.compiled_shader"]

    property string generatedShadersDir: "shaders"
    property string qsbName: "qsb"
    property stringList glslVersions
    property stringList hlslVersions
    property stringList mslVersions
    property bool useQt6Versions: true
    property bool tessellation: true
    property string tessellationMode
    PropertyOptions {
        name: "tessellationMode"
        allowedValues: ["triangles", "quads"]
    }
    property int tessellationVertexCount
    property int viewCount
    property bool batchable: false
    property int zOrderLocation

    property bool optimized: false

    property stringList defines
    property bool debugInformation: false

    property bool addResourceData: true
    property bool useCompiler: !enableLinking

    Depends { name: "Qt"; submodules: ["core","gui"] }

    version: "6.11.1"
    hasLibrary: true
    architectures: ["x86_64"]
    targetPlatform: "macos"
    staticLibsDebug: []
    staticLibsRelease: []
    dynamicLibsDebug: []
    dynamicLibsRelease: []
    linkerFlagsDebug: []
    linkerFlagsRelease: []
    frameworksDebug: []
    frameworksRelease: ["QtGui","QtCore","IOKit","DiskArbitration","UniformTypeIdentifiers","AppKit","OpenGL","ImageIO","Metal"]
    frameworkPathsDebug: []
    frameworkPathsRelease: ["/usr/local/lib"]
    libNameForLinkerDebug: "QtShaderTools"
    libNameForLinkerRelease: "QtShaderTools"
    libFilePathDebug: undefined
    libFilePathRelease: "/usr/local/lib/QtShaderTools.framework/QtShaderTools"
    pluginTypes: []
    moduleConfig: ["shared","lib_bundle"]
    cpp.defines: ["QT_SHADERTOOLS_LIB"]
    cpp.systemIncludePaths: ["/usr/local/lib/QtShaderTools.framework/Headers"]
    cpp.libraryPaths: []
    isFramework: true
    Group {
        files: "/usr/local/share/qt/metatypes/qt6shadertools_metatypes.json"
        filesAreTargets: true
        fileTags: ["qt.core.metatypes"]
    }

    enableLinking: false

    Group {
        condition: useCompiler

        FileTagger {
            patterns: ["*.vert"]
            fileTags: ["qt.shader.vertex", "qt.shader"]
        }

        FileTagger {
            patterns: ["*.tesc", "*.tese"]
            fileTags: ["qt.shader.tessellation", "qt.shader"]
        }

        FileTagger {
            patterns: ["*.frag"]
            fileTags: ["qt.shader.fragment", "qt.shader"]
        }

        FileTagger {
            patterns: ["*.comp"]
            fileTags: ["qt.shader.compute", "qt.shader"]
        }

        Rule {
            inputs: ["qt.shader"]
            outputFileTags: [
                "qt.compiled_shader",
                "qt.compiled_shader.vertex",
                "qt.compiled_shader.tessellation",
                "qt.compiled_shader.fragment",
                "qt.compiled_shader.compute",
                "qt.core.resource_data",
            ]
            outputArtifacts: ShaderTools.compilerOutputArtifacts(input)
            prepare: ShaderTools.compilerCommands.apply(ShaderTools, arguments)
        }
    }
}
