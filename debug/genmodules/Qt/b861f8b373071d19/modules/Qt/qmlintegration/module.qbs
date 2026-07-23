QtModule {
    qtModuleName: "QmlIntegration"
    Depends { name: "Qt"; submodules: ["core"]}

    version: "6.11.1"
    architectures: []
    targetPlatform: "macos"
    hasLibrary: false
    staticLibsDebug: []
    staticLibsRelease: []
    dynamicLibsDebug: []
    dynamicLibsRelease: []
    linkerFlagsDebug: []
    linkerFlagsRelease: []
    frameworksDebug: []
    frameworksRelease: []
    frameworkPathsDebug: []
    frameworkPathsRelease: []
    libNameForLinkerDebug: undefined
    libNameForLinkerRelease: undefined
    libFilePathDebug: undefined
    libFilePathRelease: undefined
    pluginTypes: []
    moduleConfig: []
    cpp.defines: ["QT_QMLINTEGRATION_LIB"]
    cpp.systemIncludePaths: ["/usr/local/include","/usr/local/include/QtQmlIntegration"]
    cpp.libraryPaths: []
    
}
