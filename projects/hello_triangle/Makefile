NAME = game
SETTINGS = -std=c++17 -Wall -Wextra
I = -I ../../include -I ../../engine/src/Audio -I ../../engine/ext_lib -I ../../engine/src/Window -I ../../engine/src/Input

all: x

x: main.cpp
	g++ $(I) $(SETTINGS) main.cpp ../../engine/lib/libHopEngine.a -o $(NAME) -L ../../engine/ext_lib/GLFW -lpthread -lm -lglfw3 -lX11 -lXxf86vm -lXrandr -lpthread -lXi -ldl

.PHONY: clean
clean :
	rm $(NAME)