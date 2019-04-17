#ifndef UNIT_H
#define UNIT_H

#include <iostream>
using namespace std;


class Unit
{
private:

public:
	Unit();
	Unit(int a);
	void setHealth(int a);
	void showHealth();

protected:
	int health;

};

#endif // UNIT_H
