#include "player.h"



extern SDL_Window* window;

//Defining a function to find out the maximum of 2 numbers(i.e. positions)
double max(double a, double b)
{
    if(a > b)
        return a;
    else
        return b;
}

//Defining a function to find out the minimum of 2 numbers(i.e. positions)
double min(double a, double b)
{
    if(a < b)
        return a;
    else
        return b;
}

Player
{

    // loading the image to the RAM
    void load(SDL_Surface *surface, const char *path, SDL_Texture *texture, SDL_Renderer *rend)
    {
        //Loading the image by using IMG_Load
        surface = IMG_Load(path);

        //Checking whether we are successful to create a surface to load an image
        if (!surface)
        {
            printf("Surface Error: %s\n", SDL_GetError());//Printing a error message with specification
            Clean(window, rend);
            return;
        }

        // loading the image data into the graphics hardware's memory from the RAM
        texture = SDL_CreateTextureFromSurface(rend, surface);
        SDL_FreeSurface(surface);//Freeing the surface

        //Checking whether we are successful to create a texture or not
        if (!texture)
        {
            printf("Texture Error: %s\n", SDL_GetError());//Printing a error message with specification
            Clean(window, rend);
            return;
        }
    }
    
    //Drawing a rectangular shape of the Player object as well as Event Handling
    void PlayerMoves(int rect_height, int rect_width, int rect_x_pos, int rect_y_pos, SDL_Event event)
    {
        // struct to hold the position and size of the sprite
        //SDL_Rect dest_rect;
        dest_rect.h = rect_height;
        dest_rect.w = rect_width;
        dest_rect.x = rect_x_pos;
        dest_rect.y = rect_y_pos;
        double psi_x;
        double psi_y;

        //Handling Event (i.e. Keyboard Event Handling)
        while (SDL_PollEvent(&event))
        {
            switch (event.type)
            {
            case SDL_QUIT:
                //close = 1;
                break;
            case SDL_KEYDOWN:
                switch (event.key.keysym.scancode)
                {
                case SDL_SCANCODE_LEFT:
                    psi_x = max(0,psi_x - FPS/10);
                    break;
                case SDL_SCANCODE_RIGHT:
                    psi_x = min(940 - dest_rect.x, psi_x + FPS/10);
                    break;
                case SDL_SCANCODE_UP:
                    psi_y = max(400, psi_y - FPS/10);
                    break;
                case SDL_SCANCODE_DOWN:
                    psi_y = min(600, psi_y + FPS/10);
                    break;
                }
            }
        }
        dest_rect.x = (int) psi_x;
        dest_rect.y = (int) psi_y;
    }

};

