#include "clean.h"

void Clean(SDL_Window* win, SDL_Renderer* render)
{
    SDL_DestroyRenderer(render);
    SDL_DestroyWindow(win);
    SDL_Quit();
}