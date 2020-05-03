#pragma once
#include <SDL.h>

#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Game {

private:

	SDL_Window* window;
	SDL_Renderer* renderer;

	bool m_Running = false;
	bool mouseMenuClicked;
	bool spaceKeyPressed;
	bool spaceKeyReleased;
	bool bHoldingKey;

	int m_counter = 0;
	int mouseX, mouseY;
	int direction = 0;
	int spacePressedCounter = 0;

	int startCounter, endCounter;

public:

	Game() {

	}
	~Game() {

	}

	bool isRunning() {
		return m_Running;
	}

	void init(const char* title, int x, int y, int width, int height, bool fullscreen = false);
	void handleEvents();
	void update();
	void render();

	void clean();

};