#ifndef WINMENUSTATE_H
#define WINMENUSTATE_H

#include "SFML/Graphics.hpp"

#include "Text.h"
#include "Button.h"
#include "FPSCounter.h"
#include "MoreInfo.h"

#include "State.h"
#include "StateMachine.h"
class StateMachine;

class WinMenuState : public State {
	public:
		WinMenuState(StateMachine& machine, sf::RenderWindow& window, bool replace = true);
		~WinMenuState();

		void updateEvents();
		void update();
		void render();

	private:
		//Class objects
		Text* winText;
		Button* quitGameButton;
		Button* mainMenuButton;
		FPSCounter fpsCounter;

		//SFML
		sf::Event sfEvent;
};

#endif