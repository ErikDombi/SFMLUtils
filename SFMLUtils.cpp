#include "SFMLUtils.h"
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;
using namespace sf;

void SFMLUtils() {

}

sf::CircleShape SFMLUtils::drawElipse(Vector2i xy, int radius, Color color) {
	sf::CircleShape cShape = sf::CircleShape(radius);
	cShape.setPosition(xy.x, xy.y);
	cShape.setFillColor(color);
	window.draw(cShape);
	return cShape;
}

sf::CircleShape SFMLUtils::drawElipse(int x, int y, int radius, Color color) {
	sf::CircleShape cShape = sf::CircleShape(radius);
	cShape.setPosition(x, y);
	cShape.setFillColor(color);
	window.draw(cShape);
	return cShape;
}

sf::RectangleShape SFMLUtils::drawRect(IntRect Rect, Color color) {
	sf::RectangleShape rShape = sf::RectangleShape(Vector2f(Rect.width, Rect.height));
	rShape.setPosition(Rect.left, Rect.top);
	rShape.setFillColor(color);
	window.draw(rShape);
	return rShape;
}

sf::Text SFMLUtils::drawText(string text, int x, int y, Color color) {
	sf::Font font; 
	font.loadFromFile("Roboto-Regular.ttf");
	sf::Text tmpText = sf::Text(text, font);
	tmpText.setPosition(x, y);
	tmpText.setFillColor(color);
	window.draw(tmpText);
	return tmpText;
}

sf::Text SFMLUtils::drawText(string text, Vector2i xy, Color color) {
	sf::Font font;
	font.loadFromFile("Roboto-Regular.ttf");
	sf::Text tmpText = sf::Text(text, font);
	tmpText.setPosition(xy.x, xy.y);
	tmpText.setFillColor(color);
	window.draw(tmpText);
	return tmpText;
}
