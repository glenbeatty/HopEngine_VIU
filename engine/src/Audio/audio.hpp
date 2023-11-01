#pragma once
#include <miniaudio.h>
#include <string>

class AudioEngine{

	private:

	ma_result miniaudio_result;
	ma_engine miniaudio_engine;
	std::string dir;

	public:
	AudioEngine();
	~AudioEngine();
	bool is_valid();
	std::string get_dir();
	ma_engine get_ma_engine();
	
	bool play_sound(const char* filename);
};

