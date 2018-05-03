#ifndef SLIDER_H
#define SLIDER_H

class Slider {
	private:
		sf::RectangleShape line;
		int sliderHeight;

	public:
		Slider();	
		void draw(sf::RenderWindow &window);
		virtual void move(int);
		inline sf::RectangleShape* getLine() { return &line; }
		int posx();
		int posy();
		//bool Collision(ball &b);
		void function(ball &);
		~Slider() {}
};

#endif