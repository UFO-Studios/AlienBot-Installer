const { app, BrowserWindow } = require("electron");
const path = require("path");

const createWindow = () => {
  const win = new BrowserWindow({
    width: 800,
    height: 600,
    center: true,
    fullscreenable: false,
    autoHideMenuBar: true,
    maximizable: false,
    skipTaskbar: false,
    title: "AlienBot Installer",
    webPreferences: {
      preload: path.join(__dirname, "./preload.js"),
    },
  });

  win.loadFile(path.join(__dirname, "./index.html"));
};

app.whenReady().then(() => {
  createWindow();

  app.on("activate", () => {
    if (BrowserWindow.getAllWindows().length === 0) createWindow();
  });
  console.log("Ready!");
});

app.on("window-all-closed", () => {
  if (process.platform !== "darwin") app.quit();
});
