SETTINGS = -std=c++17 -Wall -Wextra

all: libHopEngine.a

libHopEngine.a: audio.o hop.o window.o input.o
	ar rcs lib/libHopEngine.a obj/audio.o obj/hop.o obj/window.o obj/input.o

hop.o:
	g++ $(SETTINGS) -I src/Input -I src/Window -I ext_lib/glad/ -I ext_lib/GLFW/ -I ../include -I src/Audio -I ext_lib/miniaudio -c src/Hop/hop.cpp -o obj/hop.o

window.o:
	g++ $(SETTINGS) -I src/Window -I ext_lib/glad/ -I src/Input -I ext_lib/GLFW/ -c src/Window/window.cpp -o obj/window.o

input.o:
	g++ $(SETTINGS) -I src/Input -I ext_lib/GLFW -I src/Input -c src/Input/input.cpp -o obj/input.o

audio.o:
	g++ $(SETTINGS) -I ext_lib/miniaudio -c src/Audio/audio.cpp -o obj/audio.o

.PHONY: clean
clean:
	rm lib/*.a
	rm obj/*.o
