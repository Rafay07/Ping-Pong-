#include "menu.h"
#include <sstream>


Menu::Menu() {

	font.loadFromFile("Lato-LightItalic.ttf");
	text.setFont(font);
	text.setString("Welcome to the Game!");
	text.setCharacterSize(30);
	text.setStyle(sf::Text::Bold);
	text.setColor(sf::Color::Red);
	text.setPosition(100, 100);
	
	std::stringstream ss;
	//ss << ++R;
	score.setFont(font);
	score.setString( ss.str().c_str() );

}


void Menu::draw(sf::RenderWindow &window) {
	//window.clear();
	window.draw(text);
	window.draw(score);
	
}
