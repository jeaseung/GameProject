#pragma once
#ifndef __ACTOR_H__
#define __ACTOR_H__

class Actor
{
public:
	Actor();
	virtual ~Actor();
	


	virtual char GetShape() = 0;



};
#endif // __ACTOR_H__


