#include "soldier.h"



Soldier::Soldier():damage(20), speed(3)
{

}

/*Soldier::Soldier(int a):damage(a)
{

}

Soldier::Soldier(int a, int b):Unit (a),damage(b)
{

}*/

void Soldier::showSpeed()
{
	cout << "Soldier speed: " << speed << endl;
}

void Soldier::showDamage()
{
	cout << "Soldier damage: " << damage << endl;
}
