QtModule {
    qtModuleName: "OpenGLWidgets"
    Depends { name: "Qt"; submodules: ["opengl","widgets"]}

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
    frameworksRelease: ["QtOpenGL","QtWidgets","QtGui","QtCore","IOKit","DiskArbitration","UniformTypeIdentifiers","AppKit","OpenGL","ImageIO","Metal"]
    frameworkPathsDebug: []
    frameworkPathsRelease: ["/usr/local/lib"]
    libNameForLinkerDebug: "QtOpenGLWidgets"
    libNameForLinkerRelease: "QtOpenGLWidgets"
    libFilePathDebug: undefined
    libFilePathRelease: "/usr/local/lib/QtOpenGLWidgets.framework/QtOpenGLWidgets"
    pluginTypes: []
    moduleConfig: ["shared","lib_bundle"]
    cpp.defines: ["QT_OPENGLWIDGETS_LIB"]
    cpp.systemIncludePaths: ["/usr/local/lib/QtOpenGLWidgets.framework/Headers"]
    cpp.libraryPaths: []
    isFramework: true
    Group {
        files: "/usr/local/share/qt/metatypes/qt6openglwidgets_metatypes.json"
        filesAreTargets: true
        fileTags: ["qt.core.metatypes"]
    }
}
