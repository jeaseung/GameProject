#include "GameEngine.h"

GameEngine::GameEngine()
{
}

GameEngine::~GameEngine()
{
}

void GameEngine::Input()
{
	Key = _getch();
}

void GameEngine::Rander()
{
	
	system("cls");

	Map map;
	map.DrawMap();

	gotoxy(goal->GetX(), goal->GetY());

	cout << goal->GetShape();
	
	gotoxy(character->GetX(), character->GetY());

	cout << character->GetShape();

	if (character->GetX() == goal->GetX() && character->GetY() == goal->GetY())
	{
		cout << "µµÂø" << endl;
	}
	
}

void GameEngine::Tick()
{
	if (Key == 'W' || Key == 'w')
	{
		character->MoveUp();
	}
	else if (Key == 'S' || Key == 's')
	{
		character->MoveDown();
	}
	else if (Key == 'A' || Key == 'a')
	{
		character->MoveLeft();
	}
	else if (Key == 'D' || Key == 'd')
	{
		character->MoveRight();
	}

}
