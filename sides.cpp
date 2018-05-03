#include "sides.h"

sides::sides() : ANGLE(90) {
	left = (sf::RectangleShape(sf::Vector2f(600, 10)));
	left.setPosition(3, 1);
	left.rotate(ANGLE);
	left.setFillColor(sf::Color(150,150,100));

	right = (sf::RectangleShape(sf::Vector2f(600,10)));
	right.setPosition(606, 1);
	right.rotate(ANGLE);
	right.setFillColor(sf::Color(150,150,100));
}

void sides::draww(sf::RenderWindow &window) {
	window.draw(left);
	window.draw(right);

}

bool sides::collision(ball &b) {
	sf::CircleShape *cir = b.getCircle(); 
	sf::FloatRect circle = cir->getGlobalBounds();
	sf::FloatRect rside = right.getGlobalBounds();
	return circle.intersects(rside);
}

bool sides::collision2(ball &b) {
	sf::CircleShape *cir = b.getCircle();
	sf::FloatRect circle = cir->getGlobalBounds();
	sf::FloatRect lside = left.getGlobalBounds();
	return circle.intersects(lside);
}