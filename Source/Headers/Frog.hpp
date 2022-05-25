#pragma once

class Frog
{
	short x;

	unsigned char animation_timer;
	unsigned char current_frame;

	unsigned char direction;

	unsigned short y;

	std::array<bool, 4> control_keys;

	sf::Sprite sprite;

	sf::Texture texture;
public:
	bool dead;
	Frog();

	bool get_dead() const;

	bool update_swamp(std::array<bool, 5>& i_swamp);

	unsigned short get_y() const;

	void draw(sf::RenderWindow& i_window);
	void move(char i_value);
	void reset();
	void set_dead();
	void update();

	sf::IntRect get_rect() const;
};