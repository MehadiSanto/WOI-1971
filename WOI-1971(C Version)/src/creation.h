#ifndef CREATION_H
#define CREATION_H

//Preprocessors
#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_timer.h>
#include <SDL2/SDL_image.h>
#include <iostream>
using namespace std;
#include "clean.h"

//Creating a window
int WindowCreate(SDL_Window* win, const char *title, int x_pos, int y_pos, int width, int height, unsigned int flag);

//Creating a Renderer
int RenderCreate(SDL_Renderer* render, SDL_Window* win, unsigned int r_flag);



#endif 