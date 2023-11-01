#include <iostream>

void keyboard_inputs (GLFWwindow* window, int key, int scancode, int action, int mods);
void initialize_keyboard(Game game);
void key_up();
void key_down();
void key_left();
void key_right();
void key_esc();
void key_space();
void key_enter();


void initialize_keyboard(Game* game){
    glfwSetKeyCallback(game->window.window, keyboard_inputs);
}

/* Process keyboard input. Call functions when corrosponding key is pressed.
 * 
*/
void keyboard_inputs (GLFWwindow* window, int key, int scancode, int action, int mods){   
    
    // Cast unused variables to void to avoid compiler warnings. 
    (void)scancode;
    (void)mods;

    // Meaningless assignment avoids compiler warning.
    window = window;

    if(action==GLFW_PRESS){

        if(key==GLFW_KEY_ESCAPE){
            key_esc();
        }

        if(key==GLFW_KEY_ENTER){
           key_enter();
        }

        if(key==GLFW_KEY_SPACE){
            key_space();
        }
        
        if(key==GLFW_KEY_UP){
            key_up();
        }

       if(key==GLFW_KEY_DOWN){
            key_down();
        }

       if(key==GLFW_KEY_LEFT){
            key_left();
        }
        
        if(key==GLFW_KEY_RIGHT){
            key_right();
        }
    }
}

void key_up(){
    std::cout << "UP" << std::endl;
}

void key_down(){
    std::cout << "DOWN" << std::endl;
}

void key_left(){
    std::cout << "LEFT" << std::endl;
}

void key_right(){
    std::cout << "RIGHT" << std::endl;
}

void key_esc(){
    std::cout << "ESCAPE" << std::endl;
}

void key_space(){
    std::cout << "SPACE BAR" << std::endl;
}

void key_enter(){
    std::cout << "ENTER" << std::endl;
}