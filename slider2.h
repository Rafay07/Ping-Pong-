#ifndef SLIDER2_H
#define SLIDER2_H

class slider2 : public Slider {
	private:
		sf::CircleShape circle;
		sf::RectangleShape line;

	public:
		slider2();
		void draw(sf::RenderWindow &);
		void move(int a);
		bool collision2(ball &b);
		~slider2() {}

};

#endif