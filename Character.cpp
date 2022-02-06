#include "Character.h"

Character::Character()
{

}

Character::~Character()
{
}

char Character::GetShape()
{
	return 'P';
}

void Character::MoveUp()
{
	Y--;
}

void Character::MoveDown()
{
	Y++;
}

void Character::MoveRight()
{
	X++;
}

void Character::MoveLeft()
{
	X--;
}

void Character::SetX(int x)
{
	X = x;
}

int Character::GetX()
{
	return X;
}

void Character::SetY(int y)
{
	Y = y;
}

int Character::GetY()
{
	return Y;
}