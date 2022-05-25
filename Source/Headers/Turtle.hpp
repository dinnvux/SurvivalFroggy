#pragma once

class Turtle
{
	bool direction;
	
	bool diving;
	
	bool diving_down;

	short x;

	unsigned char animation_timer;
	unsigned char current_frame;
	unsigned char diving_state;
	unsigned char diving_timer;
	unsigned char size;
	unsigned char speed;

	unsigned short y;

	sf::Sprite sprite;

	sf::Texture texture;
public:
	Turtle(bool i_diving, unsigned char i_size, unsigned char i_x, unsigned char i_y);

	bool check_frog(const Frog& i_frog) const;

	void draw(sf::RenderWindow& i_window);
	void update(bool i_move_frog, Frog& i_frog);
};