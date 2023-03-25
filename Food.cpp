#include "Food.h"

// #define WIDTH 50;
// #define HEIGHT 25;

Food::Food()
{
    gen_food();
}

void Food::gen_food()
{
    pos.X = (rand() % 50 - 3) + 1;
    pos.Y = (rand() % 25 - 3) + 1;
}

COORD Food::get_pos() { return pos; }