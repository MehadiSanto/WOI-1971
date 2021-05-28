#include "creation.h"

//Creating a window
int WindowCreate(SDL_Window* win, const char *title, int x_pos, int y_pos, int width, int height, unsigned int flag)
{
    win=SDL_CreateWindow(title, x_pos, y_pos, width, height, flag);
    if(!win)
    {
        printf("Window Error: %s\n", SDL_GetError());
        SDL_DestroyWindow(win);
        SDL_Quit();
        return 1;
    }
    return 0;
}

//Creating a Renderer
int RenderCreate(SDL_Renderer* render, SDL_Window* win, unsigned int r_flag)
{
    render=SDL_CreateRenderer(win,-1, r_flag);
    if(!render)
    {
        Clean(win, render);
        return 1;
    }
    return 0;
}