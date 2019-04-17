#ifndef SOLDIER_H
#define SOLDIER_H

#include "unit.h"

class Soldier : virtual public Unit
{
private:

protected:
	int damage;
	int speed;
public:
	Soldier();
	//Soldier(int a);
	//Soldier(int a, int b);
	void showSpeed();
	void showDamage();

};

#endif // SOLDIER_H
