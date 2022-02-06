#pragma once
#ifndef __MAP_H__
#define __MAP_H__


#include<iostream>
#include "Wall.h"
#include "Floor.h"
#include "Goal.h"
#include "Character.h"
#include<vector>

using namespace std;

class Map
{
public:
	Map();
	virtual ~Map();
	/*Wall* wall = new Wall();
	Floor* floor = new Floor();*/

	Actor* wall = new Wall();
	Actor* floor = new Floor();

	vector<Actor*>ActorList;

	int Row = 10;
	int Column = 10;

	//string map[10][10] =
	//{	{"Wall","Wall","Wall","Wall","Wall","Wall","Wall","Wall","Wall","Wall"},
	//	{"Wall","Floor","Floor","Floor","Floor","Floor","Floor","Floor","Floor","Wall"},
	//	{"Wall","Floor","Floor","Floor","Floor","Floor","Floor","Floor","Floor","Wall"},
	//	{"Wall","Floor","Floor","Floor","Floor","Floor","Floor","Floor","Floor","Wall"},
	//	{"Wall","Floor","Floor","Floor","Floor","Floor","Floor","Floor","Floor","Wall"},
	//	{"Wall","Floor","Floor","Floor","Floor","Floor","Floor","Floor","Floor","Wall"},
	//	{"Wall","Floor","Floor","Floor","Floor","Floor","Floor","Floor","Floor","Wall"},
	//	{"Wall","Floor","Floor","Floor","Floor","Floor","Floor","Floor","Floor","Wall"},
	//	{"Wall","Floor","Floor","Floor","Floor","Floor","Floor","Floor","Floor","Wall"},
	//	{"Wall","Wall","Wall","Wall","Wall","Wall","Wall","Wall","Wall","Wall"},
	//};

	void DrawMap();
	
	
};
#endif // !__MAP_H__
