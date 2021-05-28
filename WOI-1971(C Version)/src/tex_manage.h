#ifndef TEX_MANAGE_H
#define TEX_MANAGE_H

//Preprocessors
#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_timer.h>
#include <SDL2/SDL_image.h>
#include <iostream>
using namespace std;
#include "clean.h"



typedef struct TextureManager{

    // loading the image
    void load(SDL_Surface* surface, const char* path, SDL_Texture* texture, SDL_Renderer* rend);

    //Creating a rectangle
    void DrawRectangle(int rect_height, int rect_width,int rect_x_pos, int rect_y_pos);
}TextureManager;