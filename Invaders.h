#ifndef INVADERS_H
#define INVADERS_H

#include "SFML/Graphics.hpp"
#include "SFML/System/Vector2.hpp"

#include "Player.h"

#include <iostream>

class Invaders {
	public:
		Invaders();
		
		void renderTo(sf::RenderWindow& window);
		void setInvaderPos(sf::Vector2<float> newPos);
		void moveTo(sf::Vector2<float> distance);
		int getX();
		int getY();
		sf::FloatRect getGlobalBounds();

	private:
		sf::Texture texture;
		sf::Sprite invader;
};

#endif