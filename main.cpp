/*
	* File: Main.cpp
	* Contributors: Muhammad Rafay (K17-3746)
					Mubashir Ahmed
					Zubair Aslam
					Bilal Rizwan


	* Ping pong game
		using SFML graphics

This software is provided 'as-is', without any express or
implied warranty. In no event will the programmers be held
liable for any damages arising from the use of this software.
 
Permission is granted to anyone to use this software for any purpose,
including commercial applications, and to alter it and redistribute
it freely, subject to the following restrictions:
 
1. The origin of this software must not be misrepresented;
   you must not claim that you wrote the original software.
   If you use this software in a product, an acknowledgment
   in the product documentation would be appreciated but
   is not required.
 
2. Altered source versions must be plainly marked as such,
   and must not be misrepresented as being the original software.
 
3. This notice may not be removed or altered from any
   source distribution.
 
 *
 * Created on 22nd April, 2018, 11:02
 */

#include <iostream>
//#include <unistd.h>
#include <math.h>
#include <SFML/Graphics.hpp>

using namespace std;
#include "slider.cpp"
#include "ball.cpp"
#include "sides.cpp"
#include "slider2.cpp"
#include "menu.cpp"

#define SCREEN_X 600
#define SCREEN_Y 600

float xspeed = 0.09;
float yspeed = 0.09;
int score = 0;

double mapDouble(double valToMap, double valMin, double valMax, double mappedMin, double mappedMax)
{
	return ((valToMap - valMin) / (valMax - valMin)) * (mappedMax - mappedMin) + mappedMin;
}

void Score(Slider s, slider2 bar2, ball b) {
	Menu menu;

	if(bar2.collision2(b) /*|| b.collision(b, s)*/) {
		score++;
		cout << score << endl;
	}
}

void Movement(Slider bar, slider2 bar2, ball b, sides lside, sf::RenderWindow &window) {
	
	float xAcc = 0.99436734532f, yAcc=0.89235632f;
	float angle;

	if(bar2.collision2(b)) {
		//cout << "WTF";
		xspeed += 0.04;
		//yspeed + tan(45);
		cout << xspeed;
	}



	if(bar2.collision2(b) /*|| bar.Collision(b) b.collision(b, bar) */|| lside.collision(b) || lside.collision2(b)) {

			xspeed = -(xspeed)	; //*exp(0.0001));
			yspeed = -(yspeed);
			//xspeed = -(xspeed+cos(89));
			//yspeed = -(yspeed+sin(91));
			Score(bar,bar2,b);
		}

		lside.draww(window);
		b.draw(window);
		bar.draw(window);
		bar2.draw(window);
}




int main() {

	const double speed = 0.001;	
	sf::RenderWindow window(sf::VideoMode(SCREEN_X, SCREEN_Y), "Game2");
	Slider s;
	slider2 bar2;
	ball b;
	sides lside;
	Menu menu;


	sf::Event event;
	window.setKeyRepeatEnabled(true);
	while(window.isOpen()) {
		
		while(window.pollEvent(event)) {
			if(event.type==sf::Event::Closed)
				window.close();

			if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
				s.move(-6.0);

			if(sf::Keyboard::isKeyPressed (sf::Keyboard::Right))
				s.move(6.0);

			if(sf::Keyboard::isKeyPressed (sf::Keyboard::A))
				bar2.move(-6.0);

			if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
				bar2.move(6.0);

		}
		window.clear();
		b.mover(xspeed, yspeed);
		//cout << endl << s.posx();
		//window.clear();
		Movement(s, bar2, b, lside, window);
		s.function(b);
		
		menu.draw(window);
		window.display();

	}
	
}