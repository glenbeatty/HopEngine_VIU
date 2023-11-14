NAME = game
SETTINGS = -std=c++17 -Wall -Wextra
I = -I ../../include -I ../../engine/src/Audio -I ../../engine/ext_lib -I ../../engine/src/Window -I ../../engine/src/Input

all: x

x: main.cpp
	g++ $(I) $(SETTINGS) main.cpp ../../engine/lib/libHopEngine.a -o $(NAME) -lglfw3 -lopengl32 -lgdi32

.PHONY: clean
clean :
	del $(NAME)