#include "duck.h"

Duck::Duck(FlyBehavior & _FB, QuackBehavior & _QB): flyBehavior(_FB), quackBehavior(_QB)
{

}

void Duck::swim()
{
	cout << "All ducks float, even decoys!" << endl;
}

void Duck::performFly(FlyBehavior&flyBehavior)
{
	flyBehavior.fly();
}

void Duck::performQuack(QuackBehavior& quackBehavior)
{
	quackBehavior.quack();
}


void Duck::setFlyBehavior()
{

}

void Duck::setQuackBehavior()
{

}

