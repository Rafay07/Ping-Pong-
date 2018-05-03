#ifndef MENU_H
#define MENU_H

class Menu {
	private:
		sf::Text text;
		sf::Font font;
		sf::Text score;

	public:
		Menu();
		void draw(sf::RenderWindow &window);
};

#endif