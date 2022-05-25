#pragma once

constexpr unsigned char CELL_SIZE = 16;

constexpr unsigned char CROCODILE_ANIMATION_SPEED = 32;
constexpr unsigned char FAST_SPEED = 3;
constexpr unsigned char FONT_HEIGHT = 16;
constexpr unsigned char FROG_ANIMATION_SPEED = 8;
constexpr unsigned char MAP_WIDTH = 16;
constexpr unsigned char MAP_HEIGHT = 15;
constexpr unsigned char NORMAL_SPEED = 2;
constexpr unsigned char SCREEN_RESIZE = 3;
constexpr unsigned char SLOW_SPEED = 1;
constexpr unsigned char TOTAL_LEVELS = 8;

constexpr unsigned char TURTLE_ANIMATION_SPEED = 16;
constexpr unsigned char TURTLE_DIVING_SPEED = 32;

constexpr unsigned short TIMER_INITIAL_DURATION = 4096;
//After the player passes the level, we reduce the duration of the timer by this amount.
constexpr unsigned short TIMER_REDUCTION = 512;

constexpr std::chrono::microseconds FRAME_DURATION(16667);