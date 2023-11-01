#include <hop.hpp>
#include <iostream>
#include <input.hpp>

Game::Game(){
    init_audio();
}

// See if we successfully created a miniaudio engine to play sound in.
void Game::init_audio(){
    
    if(audio_engine.is_valid()){
        this->audio_valid = true;
    }
    else{
        this->audio_valid = false;
    }
}

// Temporary function to demonstrate window creation.
void Game::open_window(){
    window.run();
}

// Play a sound by providing it's filename. File must be located within sounds folder in project directory.
void Game::play_sound(const char* filename){
    audio_engine.play_sound(filename);
}

bool Game::is_running(){
    return window.is_running();
}