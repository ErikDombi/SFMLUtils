#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;
using namespace sf;

extern RenderWindow window;

class SFMLUtils
{
public:
	sf::Text drawText(string text, int x, int y, Color color);
	sf::Text drawText(string text, Vector2i xy, Color color);
	sf::RectangleShape drawRect(IntRect Rect, Color color);
	sf::CircleShape drawElipse(int x, int y, int radius, Color color);
	sf::CircleShape drawElipse(Vector2i xy, int radius, Color color);
};
