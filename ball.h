#ifndef BALL_H
#define BALL_H

class ball {

	private:
		sf::CircleShape circle;
		int size;

	public:
		ball();	
		void draw(sf::RenderWindow &window);
		void mover(float, float);
		sf::CircleShape* getCircle();
		inline int cposx() { return circle.getPosition().x; }
		inline int cposy() { return circle.getPosition().y; }
		//bool collision(ball &b, Slider &rect);
		~ball() {}
};

#endif