#pragma once
#include "Game.h"
class TitleScreen
{
	public:
		TitleScreen();
		~TitleScreen();

		void init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);
		void handleEvents();
		void update();
		void render();
		void clean();
		bool running();
	private:
		bool isRunning;
		SDL_Window* window;
		SDL_Renderer* renderer;

};

