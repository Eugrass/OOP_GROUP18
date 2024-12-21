#pragma once
#include <SFML/Graphics.hpp>
#include <unordered_map>
#include <string>

class Catan;

class Dice
{
public:
	Dice(sf::RenderWindow* window, std::unordered_map<std::string, sf::Texture>* textures, Catan* game);

	int rollDice();
	void update();
	void draw();

private:
	sf::RenderWindow* window;
	Catan* game;
	std::unordered_map<std::string, sf::Texture>* textures;
	sf::Sprite dice1Texture;
	sf::Sprite dice2Texture;
	int dice1;
	int dice2;
};

