QtModule {
    qtModuleName: "OpenGL"
    Depends { name: "Qt"; submodules: ["core","gui"]}

    version: "6.11.1"
    architectures: ["x86_64"]
    targetPlatform: "macos"
    hasLibrary: true
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
    libNameForLinkerDebug: "QtOpenGL"
    libNameForLinkerRelease: "QtOpenGL"
    libFilePathDebug: undefined
    libFilePathRelease: "/usr/local/lib/QtOpenGL.framework/QtOpenGL"
    pluginTypes: []
    moduleConfig: ["shared","lib_bundle"]
    cpp.defines: ["QT_OPENGL_LIB"]
    cpp.systemIncludePaths: ["/usr/local/lib/QtOpenGL.framework/Headers"]
    cpp.libraryPaths: []
    isFramework: true
    Group {
        files: "/usr/local/share/qt/metatypes/qt6opengl_metatypes.json"
        filesAreTargets: true
        fileTags: ["qt.core.metatypes"]
    }
}
