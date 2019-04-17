#ifndef HORSE_H
#define HORSE_H

#include "unit.h"

class Horse: virtual public Unit
{
private:

protected:
	int speed;
public:
	Horse();
	void showSpeed();
};

#endif // HORSE_H
