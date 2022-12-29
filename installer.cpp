//Created by @NiceygyLive && @MDxWAARRIORxOP
#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <cstdio>
#pragma comment(lib, "Urlmon.lib")

using namespace std;

int help()
{
    std::cout << "HELP MENU: Select one to download & Install\n";
    std::cout << "Discord bot (Discord)\n";
    std::cout << "Youtube bot (Youtube)\n";
    std::cout << "Twitch bot (Twitch)\n";
    std::cout << "You need git to run this installer!\n";
    return true;
};

int downloadComplete()
{
    std::cout << "Downloaded and installed! I have also installed the node modules for you. Rename `Config-template.json` to `config.json`, fill out the values and run `npm run start`! \n You can now close this installer.\n";
    return true;
};

int downloadFile(string downloadType)
{
    if (downloadType == "discord") {
        std::string git = "git clone https://github.com/UFO-Studios/Alienbot-Discord.git ";
        const char * cGit = git.c_str();
        const char * GString = cGit;
        system(GString);
        return true;
    } else if (downloadType == "youtube") {
        std::string git = "git clone https://github.com/UFO-Studios/Alienbot-youtube.git";
        const char * cGit = git.c_str();
        const char * GString = cGit;
        system(GString);
        return true;
    } else if (downloadType == "twitch") {
        std::string git = "git clone https://github.com/UFO-Studios/Alienbot-Twitch.git";
        const char * cGit = git.c_str();
        const char * GString = cGit;
        system(GString);
        return true;
    } else {
        std::cout << "Error: Invalid download type";
    };

};

int installNodeModules(string packageManager, string botType)
{
    if (packageManager == "npm"){
    std::string npm = "cd Alienbot-" + botType + " && npm install";
    const char * cNpm = npm.c_str();
    const char * NpmString = cNpm;
    system(NpmString);
    } else if (packageManager == "yarn"){
    std::string npm = "cd Alienbot- " + botType + " && yarn install";
    const char * cNpm = npm.c_str();
    const char * NpmString = cNpm;
    system(NpmString);
    } else if (packageManager == "pnpm"){
    std::string npm = "cd Alienbot-" + botType + " && pnpm install";
    const char * cNpm = npm.c_str();
    const char * NpmString = cNpm;
    system(NpmString);
    } else {
        std::cout << "Error: Invalid package manager";
    }
    return true;
};

int credits ()
{
    std::cout << "    _    _     ___ _____ _   _ ____   ___ _____ \n";
    std::cout << "   / \  | |   |_ _| ____| \ | | __ ) / _ \_   _|\n";
    std::cout << "  / _ \ | |    | ||  _| |  \| |  _ \| | | || | \n";
    std::cout << " / ___ \| |___ | || |___| |\  | |_) | |_| || | \n";
    std::cout << "/_/   \_\_____|___|_____|_| \_|____/ \___/ |_|  \n";
    std::cout << "Made by NiceygyLive and MDxWAARRIORxOP\n";
    std::cout << "Niceygy: @NiceygyLive (most platforms)\n";
    std::cout << "MDxWAARRIORxOP: @MDxWARRIORxOP or Kingerious (most platforms)\n";
    std::cout << "Copyright UFO Studios 2022. To see more refer to LICENCE in the github repo\n";
    std::cout << "Report any errors or issues to the repo. Thanks for using this software!\n";
    return true;
}

int main()
{
    std::cout << "Loading system... Please stand by\n";
    //Any future loading things go here
    std::cout << "Loaded! What would you like to install?\n";
    std::cout << "Type `help` to see all options & type `credits` to see credits\n";
    std::cout << "Make sure this installer is in the folder you want to install to!\n";
    std::string operation;
    std::cin >> operation;

    //FOR DEBUG std::cout << "You asked for " + operation;
    if (operation == "help")
    {
        help();
    }
    if (operation == "credits")
    {
        credits();
    } else {
    std::cout << "Please select your package manager for nodeJS (If you dont know what this is, type `npm`)\n Possible options:\n npm\n yarn\n pnpm\n";
    std::string packageManager;
    std::cin >> packageManager;
    std::cout << "Unfortunatly you cannot select the install location in this version, please make sure the installer is in a empty directory!\n";
    //std::string installDIRusr;
    //std::cin >> installDIRusr;
    {
        if (operation == "discord")
        {
            std::cout << "Downloading...";
            downloadFile("discord");
            std::cout << "Downloaded! Installing node modules...";
            installNodeModules(packageManager, "Discord");
        } else if (operation == "twitch")
        {
            downloadFile("twitch");
            std::cout << "Downloaded! Installing node modules...";
            installNodeModules(packageManager, "Twitch");
        } else if (operation == "youtube")
        {
            downloadFile("youtube");
            std::cout << "Downloaded! Installing node modules...";
            installNodeModules(packageManager, "Youtube");
        } else {
            std::cout << "Error: Invalid download type";
            //abort();
        };
        downloadComplete();
        };
    };
}





// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
