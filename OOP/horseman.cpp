#include "horseman.h"

Horseman::Horseman():speed(Horse::speed)
{

}

void Horseman::showSpeed()
{
	cout << "Horseman speed: " << speed << Soldier::speed << endl;
}
