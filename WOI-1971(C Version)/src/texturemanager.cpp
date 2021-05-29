#include "texturemanager.h"

extern SDL_Window* window;

//Defining a struct for loadind and presenting the simple/background image(s)
TextureManager{

    // loading the image to the RAM
    void load(SDL_Surface* surface, const char* path, SDL_Texture* texture, SDL_Renderer* rend)
    {
        //Loading the image by using IMG_Load
        surface = IMG_Load(path);

        //Checking whether we are successful to create a surface to load an image
        if (!surface)
        {
            printf("Surface Error: %s\n",SDL_GetError());//Printing a error message with specification
            Clean(window, rend);
            return;
        }

        // loading the image data into the graphics hardware's memory from the RAM
        texture = SDL_CreateTextureFromSurface(rend, surface);
        SDL_FreeSurface(surface);//Freeing the surface

        //Checking whether we are successfully created a texture or not
        if (!texture)
        {
            printf("Texture Error: %s\n", SDL_GetError());
            Clean(window, rend);
            return;
        }
    }
    
    // struct to hold the position and size of the sprite
    void DrawRectangle(SDL_Texture* texture, int rect_height, int rect_width,int rect_x_pos, int rect_y_pos)
    {
        SDL_Rect dest;
        SDL_QueryTexture(texture, NULL, NULL, &dest.w, &dest.h);
        dest.h = rect_height;
        dest.w = rect_width;
        dest.x = rect_x_pos;
        dest.y = rect_y_pos;

        //delete dest;
    }

};