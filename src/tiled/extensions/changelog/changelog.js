/**
 * 更新日志 - Tiled 扩展
 *
 * 在「猛鬼工具集」菜单中打开本仓库维护的 CHANGELOG.md。
 */

var changelogScriptPath = __filename;

function changelogFilePath() {
    return FileInfo.joinPaths(FileInfo.path(changelogScriptPath), "CHANGELOG.md");
}

function loadChangelog() {
    var path = changelogFilePath();
    if (!File.exists(path))
        throw new Error("找不到更新日志文件：\n" + path);

    var file = new TextFile(path, TextFile.ReadOnly);
    try {
        var text = file.readAll();
    } finally {
        file.close();
    }

    if (!text || !String(text).trim())
        throw new Error("更新日志文件为空：\n" + path);

    return String(text);
}

function showChangelog() {
    try {
        var text = loadChangelog();
        tiled.log("[更新日志] 打开 " + changelogFilePath());
        var dialog = new Dialog("更新日志");
        dialog.addHeading("tiled-比心专用版 " + tiled.ghostVersion, true);
        dialog.addLabel("Tiled 基线 " + tiled.version);
        dialog.addTextEdit("", text);
        dialog.exec();
    } catch (e) {
        tiled.log("[更新日志] " + e.message);
        var dialog = new Dialog("更新日志 - 错误");
        dialog.addHeading("无法打开更新日志", true);
        dialog.addTextEdit("", e.message);
        dialog.exec();
    }
}

var actionChangelog = tiled.registerAction("GhostTools_Changelog", function() {
    showChangelog();
});
actionChangelog.text = "更新日志";

tiled.extendMenu("GhostTools", [
    { separator: true },
    { action: "GhostTools_Changelog" },
]);

tiled.log("[更新日志] 已加载");
