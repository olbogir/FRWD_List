#ifndef HORSEMAN_H
#define HORSEMAN_H

#include "horse.h"
#include "soldier.h"

class Horseman : public Horse, public Soldier
{
private:
	int speed;
public:
	Horseman();
	void showSpeed();
};

#endif // HORSEMAN_H
