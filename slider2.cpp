#include "slider2.h"

slider2::slider2() {
	//sf::RectangleShape *line = Slider::getLine();
	line = sf::RectangleShape(sf::Vector2f(150,1));
	line.setPosition(30, 30);

}

void slider2::draw(sf::RenderWindow &window) {
	//sf::RectangleShape line = Slider::getLine();
	window.draw(line);
}

void slider2::move(int a) {
	//sf::RectangleShape *line = Slider::getLine();	
	line.move(a, 0);
} 

bool slider2::collision2(ball &b) {
	sf::CircleShape *circle2 = b.getCircle();
	//sf::RectangleShape *line = Slider::getLine();
	//cout << circle2 << endl;
	sf::FloatRect circle = circle2->getGlobalBounds();
	sf::FloatRect slider = line.getGlobalBounds();
	return (circle.intersects(slider));
}
