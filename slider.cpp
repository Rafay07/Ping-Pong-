#include "slider.h"

Slider::Slider () : sliderHeight(150) {
	line=sf::RectangleShape(sf::Vector2f(sliderHeight, 1));
	line.setPosition(200,550);
}

void Slider::draw(sf::RenderWindow &window) {
	window.draw(line);
}

void Slider::move(int a) {	
	line.move(a, 0);
}

int Slider::posx() {
	return line.getPosition().x;

}

int Slider::posy() {
	return line.getPosition().y;
}

void Slider::function(ball &b) {
	cout << "Ball "; 
}

// bool Slider::Collision(ball &b) {
// 	sf::CircleShape *circle2 = b.getCircle();
// 	//sf::RectangleShape *line = Slider::getLine();
// 	//cout << circle2 << endl;
// 	sf::FloatRect circle = circle2->getGlobalBounds();
// 	sf::FloatRect slider = line.getGlobalBounds();
// 	return (circle.intersects(slider));
// }
