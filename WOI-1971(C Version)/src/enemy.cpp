#include "enemy.h"

SDL_Rect e_rect;

typedef struct Enemy{

    // loading the image of the player
    void EnemyLoad(SDL_Surface* surface, const char* path, SDL_Texture* texture, SDL_Renderer* rend)
    {
        surface = IMG_Load(path);
        if (!surface)
        {
            printf("Surface Error: %s\n", SDL_GetError());
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

    //Creating a rectangle shape and Event Handling for a Enemy object
    void EnemyMoves(int rect_Height, int rect_Width, int rect_x, int rect_y, SDL_Event event)
    {
        //SDL_Rect e_rect;
        e_rect.w = rect_Width;
        e_rect.h = rect_Height;
        e_rect.x = rect_x;
        e_rect.y = rect_y;
        float vel_x = FPS/12;
        float vel_y = FPS/12;
        double posi_x = e_rect.x;
        double posi_y = e_rect.y;

       // int running = 1;
        int gameover = 0;
        while(game_running)
        {
            if(gameover == 0)
            {
                e_rect.x = (int) posi_x;
                e_rect.y = (int) posi_y;
                if(posi_x <= 940)
                {
                    posi_x = 940;
                    vel_x = -vel_x;
                }
                if(posi_y <= 600)
                {
                    posi_y = 600;
                    vel_y = -vel_y;
                }
                if(posi_x >= WINDOW_WIDTH - e_rect.w)
                {
                    posi_x = WINDOW_WIDTH - e_rect.w;
                    vel_x = -vel_x;
                }
                if(posi_y >= WINDOW_HEIGHT - e_rect.h)
                {
                    posi_y >= WINDOW_HEIGHT - e_rect.h;
                    vel_y = -vel_y;
                }
            }
        }
    }
    
}Enemy;