#include "Goal.h"

Goal::Goal()
{
}

Goal::~Goal()
{
}

char Goal::GetShape()
{
	return 'G';
}

void Goal::SetX(int x)
{
	X = x;
}

int Goal::GetX()
{
	return X;
}

void Goal::SetY(int y)
{
	Y = y;
}

int Goal::GetY()
{
	return Y;
}