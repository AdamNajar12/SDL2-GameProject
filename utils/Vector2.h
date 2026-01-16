#include "Vector2.h"

// Default constructor
Vector2::Vector2()
{
    x = 0.0f;
    y = 0.0f;
}

// Constructor with values
Vector2::Vector2(float x, float y)
{
    this->x = x;
    this->y = y;
}

// Set values
void Vector2::set(float x, float y)
{
    this->x = x;
    this->y = y;
}

