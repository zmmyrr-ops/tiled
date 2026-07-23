QtModule {
    qtModuleName: "Test"
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
    frameworksRelease: ["QtCore","DiskArbitration","UniformTypeIdentifiers","Security","AppKit","ApplicationServices","Foundation","IOKit"]
    frameworkPathsDebug: []
    frameworkPathsRelease: ["/usr/local/lib"]
    libNameForLinkerDebug: "QtTest"
    libNameForLinkerRelease: "QtTest"
    libFilePathDebug: undefined
    libFilePathRelease: "/usr/local/lib/QtTest.framework/QtTest"
    pluginTypes: []
    moduleConfig: ["shared","lib_bundle"]
    cpp.defines: ["QT_TESTLIB_LIB"]
    cpp.systemIncludePaths: ["/usr/local/lib/QtTest.framework/Headers"]
    cpp.libraryPaths: []
    isFramework: true
}
