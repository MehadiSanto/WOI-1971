#ifndef PLAYER_H
#define PLAYER_H

//Preprocessors
#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_timer.h>
#include <SDL2/SDL_image.h>
#include "constants.h"
#include "clean.h"

SDL_Rect dest_rect;

//A function to find out the maximum of 2 numbers(i.e. positions)
double max(double a, double b);

//A function to find out the minimum of 2 numbers(i.e. positions)
double min(double a, double b);

//Defining a structure for Player-Object
typedef struct PlayerObject{

    // loading the image of the player
    void PlayerLoad(SDL_Surface* surface, const char* path, SDL_Texture* texture, SDL_Renderer* rend);

    //Creating a rectangle shape and Event Handling for a Player object
    void PlayerMoves(int rect_height, int rect_width, int rect_x_pos, int rect_y_pos, SDL_Event event);
    
}Player;




#endif