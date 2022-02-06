#pragma once
#ifndef __FLOOR_H__
#define __FLOOR_H__


#include "Actor.h"
class Floor :
    public Actor
{
public:
    Floor();
    virtual ~Floor();

    char GetShape();
};
#endif // !__FLOOR_H__
