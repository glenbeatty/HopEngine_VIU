#pragma once
#include <audio.hpp>
#include <window.hpp>
#include <input.hpp>
#define GENERATE_WINDOW = FALSE; 
class Game{

    void init_audio();
    bool audio_valid;
    AudioEngine audio_engine;
    
    public:
    Game();
    void play_sound(const char* filename);
    void open_window();
    bool is_running();
    Window window;

};