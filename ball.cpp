#include "ball.h"

ball::ball() : size(5) {
	circle.setRadius(size);
	circle.setPosition(100, 100);
}

void ball::draw(sf::RenderWindow &window) {
	window.draw(circle);
}

void ball::mover(float x, float y) {
 	circle.move(x, y);
 }

sf::CircleShape* ball::getCircle() {
	return &circle;
}

// bool ball::collision(ball &b, Slider &rect) {
// 	sf::CircleShape *cir = b.getCircle();
// 	sf::RectangleShape *line = rect.getLine();
// 	sf::FloatRect circle = cir->getGlobalBounds();
// 	sf::FloatRect slider = line->getGlobalBounds();
// 	return (circle.intersects(slider));
// }