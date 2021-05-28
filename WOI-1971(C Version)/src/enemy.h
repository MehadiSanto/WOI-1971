#include <SDL2/SDL.h>
#include <SDL2/SDL_timer.h>
#include <SDL2/SDL_image.h>
#include <iostream>
using namespace std;
#include "clean.h"
#include "constants.h"

SDL_Rect e_rect;

typedef struct Enemy{

    // loading the image of the player
    void EnemyLoad(SDL_Surface* surface, const char* path, SDL_Texture* texture, SDL_Renderer* rend);

    //Creating a rectangle shape and Event Handling for a Player object
    void EnemyMoves(int rect_height, int rect_width, int rect_x_pos, int rect_y_pos, SDL_Event event);
    
}Enemy;

#endif