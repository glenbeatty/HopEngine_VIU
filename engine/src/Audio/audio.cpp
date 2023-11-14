#define MINIAUDIO_IMPLEMENTATION
#include <iostream>
#include <string>
#include "audio.hpp"

AudioEngine::AudioEngine(){
	// Validate miniaudio engine to see if we have a valid engine to play sound through.
	miniaudio_result = ma_engine_init(NULL, &miniaudio_engine);
}

AudioEngine::~AudioEngine(){
	
	// Necessary code to unintialize miniaudio engine.	
	ma_engine_uninit(&miniaudio_engine);
}

// Function to communicate whether we successfully created audio engine.
bool AudioEngine:: is_valid(){
	
	if(miniaudio_result == MA_SUCCESS){
		return true;
	}
	else{
		return false;
	}
}

// Returns the base miniaudio engine (of type me_engine) in case we need it for some reason.
ma_engine AudioEngine::get_ma_engine(){
	return miniaudio_engine;
}

/* Play a sound by file-type. This is the most primitive way to play sound through miniaudio, and it probably
 * shouldn't work this way in our finished product. This doesn't allow for re-use of sounds and I don't think
 * we can stop or loop sound. Better implementations are explained in miniaudio documentation, and examples are in
 * engine/ext_lib/miniaudio/examples
 */
bool AudioEngine::play_sound(const char* filename){

	std::string filepath = "sounds/";
	filepath = filepath + filename;
	std::cout << "DEBUG: Playing Sound File: " << filepath << std::endl;
	ma_engine_play_sound(&miniaudio_engine, filepath.c_str(), NULL);
	return true;
}
