QtModule {
    qtModuleName: "Network"
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
    libNameForLinkerDebug: "QtNetwork"
    libNameForLinkerRelease: "QtNetwork"
    libFilePathDebug: undefined
    libFilePathRelease: "/usr/local/lib/QtNetwork.framework/QtNetwork"
    pluginTypes: ["networkaccess","networkinformation","tls"]
    moduleConfig: ["shared","lib_bundle"]
    cpp.defines: ["QT_NETWORK_LIB"]
    cpp.systemIncludePaths: ["/usr/local/lib/QtNetwork.framework/Headers"]
    cpp.libraryPaths: []
    isFramework: true
    Group {
        files: "/usr/local/share/qt/metatypes/qt6network_metatypes.json"
        filesAreTargets: true
        fileTags: ["qt.core.metatypes"]
    }
}
