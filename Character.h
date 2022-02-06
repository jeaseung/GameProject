#pragma once
#ifndef __CHARACTER_H__
#define __CHARACTER_H__


#include "Actor.h"
class Character :public Actor
{
   public:
   
    Character();

    virtual ~Character();
   
    int X = 1;
    int Y = 1;

     void SetX(int x);
     int GetX();
     void SetY(int y);
     int GetY();

    char GetShape();

    void MoveUp();
    void MoveDown();
    void MoveRight();
    void MoveLeft();


};

#endif // __CHARACTER_H__