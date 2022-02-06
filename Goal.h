#pragma once
#ifndef __GOAL_H__
#define __GOAL_H__



#include "Actor.h"
class Goal :
    public Actor
{
public:
    Goal();
   
    virtual ~Goal();
   
	int X = 8;
	int Y = 8;

	void SetX(int x);
	int GetX();
	void SetY(int y);
	int GetY();

    char GetShape();


};

#endif // !__GOAL_H__