#pragma once
#include <SFML/Graphics.hpp>
class Edge
{
public:
	Edge(sf::RenderWindow* window, int number);
	~Edge();

	void update();
	void draw();

private:
	sf::RenderWindow* window;
	sf::RectangleShape edge;

	static std::array<sf::Vector2f, 72> centerPoints;
	static std::array<float, 72> rotations;
	static const float center;
	static const float radius;
};

