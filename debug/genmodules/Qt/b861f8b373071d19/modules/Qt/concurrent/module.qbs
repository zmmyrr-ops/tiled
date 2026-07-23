QtModule {
    qtModuleName: "Concurrent"
    Depends { name: "Qt"; submodules: ["core"]}

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
    frameworksRelease: ["QtCore","IOKit","DiskArbitration","UniformTypeIdentifiers"]
    frameworkPathsDebug: []
    frameworkPathsRelease: ["/usr/local/lib"]
    libNameForLinkerDebug: "QtConcurrent"
    libNameForLinkerRelease: "QtConcurrent"
    libFilePathDebug: undefined
    libFilePathRelease: "/usr/local/lib/QtConcurrent.framework/QtConcurrent"
    pluginTypes: []
    moduleConfig: ["shared","lib_bundle"]
    cpp.defines: ["QT_CONCURRENT_LIB"]
    cpp.systemIncludePaths: ["/usr/local/lib/QtConcurrent.framework/Headers"]
    cpp.libraryPaths: []
    isFramework: true
    Group {
        files: "/usr/local/share/qt/metatypes/qt6concurrent_metatypes.json"
        filesAreTargets: true
        fileTags: ["qt.core.metatypes"]
    }
}
