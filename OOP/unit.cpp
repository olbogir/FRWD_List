#include "unit.h"

Unit::Unit(): health(10)
{

}

Unit::Unit(int a): health(a)
{

}

void Unit::setHealth(int a)
{
	health = a;
}

void Unit::showHealth()
{
	cout  << "Unit health: " << health << endl;
}
