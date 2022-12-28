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
    abort(); //need a better one than abort(), exit() doesnt work
    return true;
};

int downloadFile(string downloadType, string installDIR)
{
        std::string git = "git clone https://github.com/UFO-Studios/Alienbot-Discord.git D:/TAD/Alienbot-Installer/git-test";
        const char * cGit = git.c_str();
        const char * cDIR = installDIR.c_str();
        const char * cType = downloadType.c_str();
        const char * GString = cGit; // + cType + cDIR;
        system(GString);
        return true;

};

int credits ()
{
    std::cout << "Made by NiceygyLive and MDxWAARRIORxOP\n";
    std::cout << "Niceygy: @NiceygyLive (most platforms)\n";
    std::cout << "MDxWAARRIORxOP: @MDxWARRIORxOP or Kingerious (most platforms)\n";
    std::cout << "Copyright UFO Studios 2022. To see more refer to LICENCE in the github repo\n";
    std::cout << "Report any errors or issues to the repo. Thanks for using this software!\n";
    abort();
}

int main()
{
    std::cout << "Loading system... Please stand by\n";
    //Any future loading things go here
    std::cout << "Loaded! What would you like to install? Type `help` to see all options & type `credits` to see credits\n";
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
    }
    std::cout << "Where do you want to install it to? Please use full drive paths (E.g: C:/users/your_user/example_folder)\n";
    std::string installDIRusr;
    std::cin >> installDIRusr;
    {
        if (operation == "Discord")
        {
            std::cout << "Downloading to " + installDIRusr;
            downloadFile("discord", installDIRusr);
        }
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
