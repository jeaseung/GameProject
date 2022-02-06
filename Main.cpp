#include<iostream>
#include"GameEngine.h"

#include"Map.h"

using namespace std;

int main()
{
	GameEngine* gameengine = new GameEngine();

	while (true)
	{
		gameengine->Input();
		gameengine->Tick();
		gameengine->Rander();
	}




	return 0;

}