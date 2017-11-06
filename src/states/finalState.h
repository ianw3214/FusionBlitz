#pragma once

#include "QcEngine.h"

#define TIMER_X 20
#define TIMER_Y 120

#define YOUR_TIME_X 30
#define YOUR_TIME_Y 50

class FinalState : public State{

public:
	FinalState(int finalTime);
	~FinalState();

	void init();
	void cleanUp();

	void update(Uint32 delta);
	void render(SDL_Renderer * renderer);
private:

	Texture * yourTime;

	int currentItem;
	std::vector<Texture*> menuItems;

	void updateMenuItems();
	void select();

	int keyUpTimer;
	int keyDownTimer;

	Texture * black;
	int fadeOutTimer;
	bool fadeOut;

	void startGame();

	// variables for score
	int time;
	Texture * timeTexture;
};