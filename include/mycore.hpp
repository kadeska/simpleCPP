#ifndef MYCORE_HPP
#define MYCORE_HPP

#include "filemanager.hpp"
#include "mywindowmanager.hpp"


/**
 * @brief The MyCore class
 * This class is for core functionality, this class will contain, 
 * the game loop(containing core game loop and timers...), 
 * the game manager(containing player, inventory, world manager...), 
 * the window manager(window creation, window event handling), 
 * game event manager(game event manager), 
 * game sound manager, 
 */
class MyCore
{
public:
    MyCore(std::string config_file_name);
    void initWindow(const char* title, int width, int height);

    std::string configFileName;

    /**
     * @brief fileManager
     * This class will handle game data files
     */
    FileManager* fileManager;

    // window manager
    MyWindowManager myWindowManager;

    // game manager

    // game loop manager

};

#endif // MYCORE_HPP
