#pragma once
#ifndef __GAMEENGINE_H__
#define __GAMEENGINE_H__


#include "Map.h"
#include "Character.h"
#include "Goal.h"
#include "Actor.h"
#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

class GameEngine
{
public:
	char Key=' ';
	Character* character = new Character();
	Goal* goal = new Goal();
	GameEngine();
	virtual ~GameEngine();

	void Input();
	void Tick();
	void Rander();

	void gotoxy(int x, int y)
	{
		COORD Cur;
		Cur.X = x;
		Cur.Y = y;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	}
};

#endif // !__GAMEENGINE_H__