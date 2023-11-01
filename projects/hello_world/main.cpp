#include <iostream>
#include <filesystem>
#include <string>
#include <hop.hpp>
#include <input.hpp>
#include "settings.hpp"

int main(){
    Game my_game;
    std::cout << "CKP" << std::endl;
    my_game.play_sound("background_music.mp3");
    my_game.open_window();
    initialize_keyboard(&my_game);

    // Gameplay loop. Code executed within will run until game is closed:
    while(my_game.is_running()){

    }
    
    std::cout << "Press ENTER to exit program!"; 
    std::cin.get();

}