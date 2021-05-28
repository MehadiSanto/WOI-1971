#include "init.h"

//Initializing a subsystem
int intialization()
{
    if(SDL_Init(SDL_INIT_EVERYTHING)!=0)
    {
        printf("Subsystem Initialization Error: %s\n",SDL_GetError());
        SDL_Quit();
        return 1;
    }
    if(!IMG_Init(IMG_INIT_JPG | IMG_INIT_PNG))
    {
        printf("Image Initialization Error: %s\n",SDL_GetError());
        SDL_Quit();
        return 1;
    }
    printf("\nWW      WW  OOOOO  IIIII         1          7777777  1\nWW      WW OO   OO  III         111  99999      777 111\nWW   W  WW OO   OO  III  _____   11 99   99    777   11\n WW WWW WW OO   OO  III          11  999999   777    11\n  WW   WW   OOOO0  IIIII        111     99   777    111\n                                      999\n              \n");
    printf("Game Started Successfully! Enjoy!\n");
    return 0;
}