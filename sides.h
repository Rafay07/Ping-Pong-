#ifndef SIDES_H
#define SIDES_H 

class sides : public ball{
	private:
		sf::RectangleShape left, right;
		int ANGLE;

	public:
		sides();
		bool collision(ball &);
		bool collision2(ball &);		
		void draww(sf::RenderWindow &);
		~sides() {}
};

#endif