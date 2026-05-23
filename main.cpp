#include<bits/stdc++.h>
using namespace std;
namespace fs = std::filesystem;
int main() {
    //Preprocess.
    const char* userProfileLocation = getenv("USERPROFILE");
    if(!userProfileLocation) {
        printf("HotCity can't find the user profile folder.\nYou can try to use Administrator Mode to open this application.");
        _sleep(5000);
        exit(1);
    }
    const char* AppDataLocation = getenv("APPDATA");
    if(!AppDataLocation) {
        printf("HotCity can't find the AppData folder.\nYou can try to use Administrator Mode to open this application.");
        _sleep(5000);
        exit(2);
    }

    fs::path saveDir = fs::path(userProfileLocation) / "Documents" / "HotCitySaves";
    fs::path configDir = fs::path(AppDataLocation) / "HotCity" / "HotCityBeta";

    try {
        if (!fs::exists(saveDir)) {
            fs::create_directories(saveDir); // 递归创建所有缺失的父目录
            println("Done:Config folder created.");
        }
        if (!fs::exists(configDir)) {
            fs::create_directories(configDir);
            println("Done:Config folder created.");
        }
    } catch (const fs::filesystem_error& e) {
        println(stderr, "文件夹创建失败: {}", e.what());
        return 2;
    }

    //Main menu.
    mainMenu:
    printf("Welcome to HotCity!\n");
    printf("Press 1 to start a new game.\n");
    printf("Press 2 to load a saved game.\n");
    printf("Press 3 to view the guide.\n");
    printf("Press 4 to go to settings.\n");
    int operation = 0;
    scanf("%d", &operation);
    if(operation == 1) {
        goto newGame;
    } else if(operation == 2) {
    } else if(operation == 3) {
    } else {
        printf("Invalid input. Please try again.\n");
        goto mainMenu;
    }

    //New game.
    if(1 < 0) {
        newGame:
        

    }
    return 0;
}