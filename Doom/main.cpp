#include <SDL/SDL.h>



int main(int argc, char** argv)
{
	SDL_Init(SDL_INIT_EVERYTHING);


	SDL_Window* window = SDL_CreateWindow("Esta merda funciona!", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, SDL_WINDOW_SHOWN);


	SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);
	SDL_SetRenderDrawColor(renderer, 9, 20, 33, 255);

	while (true)
	{
		SDL_Event event;
		while (SDL_PollEvent(&event))
		{
			if (event.type == SDL_QUIT)
			{
				exit(0);
			}
		}
		SDL_RenderClear(renderer);
		SDL_RenderPresent(renderer);

	}
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Quit();

	return 0;
}