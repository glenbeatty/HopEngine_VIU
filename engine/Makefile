SETTINGS = -std=c++17 -Wall -Wextra

all: libHopEngine.a

libHopEngine.a: obj/audio.o obj/hop.o obj/window.o obj/input.o obj/glad.o
	ar rcs lib/libHopEngine.a obj/audio.o obj/hop.o obj/window.o obj/input.o obj/glad.o

obj/hop.o: src/Hop/hop.cpp ../include/hop.hpp
	g++ $(SETTINGS) -I src/Input -I src/Window -I ext_lib -I ../include -I src/Audio -c src/Hop/hop.cpp -o obj/hop.o

obj/window.o: src/Window/window.cpp src/Window/window.hpp
	g++ $(SETTINGS) -I src/Window -I ext_lib -I src/Input -c src/Window/window.cpp -o obj/window.o

obj/input.o: src/Input/input.cpp src/Input/input.hpp
	g++ $(SETTINGS) -I src/Input -I ext_lib/GLFW -I src/Input -c src/Input/input.cpp -o obj/input.o
	
obj/glad.o: ext_lib/glad/glad.c
	g++ $(SETTINGS) -I ext_lib/glad -c ext_lib/glad/glad.c -o obj/glad.o

obj/audio.o: src/Audio/audio.cpp src/Audio/audio.hpp
	g++ $(SETTINGS) -I ext_lib/miniaudio -c src/Audio/audio.cpp -o obj/audio.o

.PHONY: clean
clean:
	rm lib/*.a
	rm obj/*.o
