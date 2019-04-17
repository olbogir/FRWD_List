#include <iostream>
#include "unit.h"
#include "soldier.h"
#include "horse.h"
#include "horseman.h"
using namespace std;

int main()
{
	cout << "-Unit-" << '\n';
	Unit bob;
	bob.showHealth();
	Unit jack(30);
	jack.showHealth();
	cout << "-Soldier-" << '\n';
	Soldier hercules;
	hercules.showHealth();
	hercules.showDamage();
/*	cout << '\n';\
	Soldier achilles(40,50);
	achilles.showHealth();
	achilles.showDamage();*/
	cout << "-Horseman-" << '\n';
	Horseman lancelot;

	lancelot.showHealth();
	lancelot.showDamage();
	lancelot.showSpeed();
	return 0;
}
