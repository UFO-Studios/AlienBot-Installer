// LearnConsoleC++.cpp : This file contains the 'main' function. Program execution begins and ends there.

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
    abort();
    return true;
};

int downloadFile(string downloadType)
{
    //std::string
    // the URL to download from 
    if (downloadType == "Discord") {
        const wchar_t* srcURL = L"https://github.com/UFO-Studios/AlienBot-Discord/archive/refs/heads/main.zip";
    }
    else if (downloadType == "Youtube") {
        const wchar_t* srcURL = L"https://github.com/UFO-Studios/AlienBot-Youtube/archive/refs/heads/main.zip";
    };
    // the destination file 
    const wchar_t* destFile = L"alienbot.zip";

    // URLDownloadToFile returns S_OK on success 
    if (S_OK == URLDownloadToFile(NULL, srcURL, destFile, 0, NULL))
    {

        printf("Saved to 'myfile.txt'");

        return 0;

    }

    else
    {

        printf("Failed");

        return -1;

    }

};

int main()
{
    std::cout << "Loading system... Please stand by\n";
    //Any future loading things go here
    std::cout << "Loaded! What would you like to install? Type `help` to see all options\n";
    std::string operation;
    std::cin >> operation;
    //FOR DEBUG std::cout << "You asked for " + operation;
    if (operation == "help")
    {
        help();
        //exit;
    }
    std::cout << "Where do you want to install it to? Please use full drive paths (E.g: C:/users/your_user/example_folder)\n";
    std::string installDIR;
    std::cin >> installDIR;
    {
        if (operation == "Discord")
        {
            std::cout << "Downloading to " + installDIR;
            downloadFile("Discord");
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
