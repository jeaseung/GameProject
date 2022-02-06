#ifndef __WALL_H__
#define __WALL_H__


#include "Actor.h"

class Wall : public Actor
{
public:
	Wall();
	virtual ~Wall();

	char GetShape();
};

#endif // !__WALL_H__