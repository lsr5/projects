#include <SDL.h>

/* this is bad */

int main(int argc, char** args)
{
    SDL_Init(SDL_INIT_EVERYTHING);

    SDL_Window* window;

    SDL_Renderer* renderer;

    SDL_CreateWindowAndRenderer(300, 300, 0, &window, &renderer);

    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 0);

    SDL_RenderDrawPoint(renderer, 100, 100);

    SDL_RenderPresent(renderer);

    SDL_Delay(3000);

    return 0;
}
