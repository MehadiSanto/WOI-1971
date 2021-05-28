#include "tex_manage.h"

typedef struct TextureManager{

    // loading the image to the RAM
    void load(SDL_Surface* surface, const char* path, SDL_Texture* texture, SDL_Renderer* rend)
    {
        surface = IMG_Load(path);
        if (!surface)
        {
            printf("Surface Error: %s\n",SDL_GetError());
            Clean();
            return;
        }

        // loading the image data into the graphics hardware's memory from the RAM
        texture = SDL_CreateTextureFromSurface(rend, surface);
        SDL_FreeSurface(surface);
        if (!texture)
        {
            printf("Texture Error: %s\n", SDL_GetError());
            Clean();
            return;
        }
    }
    // struct to hold the position and size of the sprite
    void DrawRectangle(SDL_Texture* texture, int rect_height, int rect_width,int rect_x_pos, int rect_y_pos)
    {
        SDL_Rect dest;
        SDL_QueryTexture(texture, NULL, NULL, &dest.w, &dest.h)
        dest.h = rect_height;
        dest.w = rect_width;
        dest.x = rect_x_pos;
        dest.y = rect_y_pos;

        delete dest;
    }

}TextureManager;