#ifndef DUCK_H
#define DUCK_H
#include <iostream>
#include "flybehavior.h"
#include "quackbehavior.h"

using std::cout;
using std::endl;
#define  xxxx '\n'

class Duck
{
private:

protected:
	FlyBehavior &flyBehavior;
	QuackBehavior &quackBehavior;
public:
	virtual void swim();
	virtual void display();
	virtual void performFly(FlyBehavior& flyBehavior);
	virtual void performQuack(QuackBehavior& quackBehavior);
	virtual void setFlyBehavior();
	virtual void setQuackBehavior();
	Duck(FlyBehavior & _FB, QuackBehavior & _QB);
	virtual ~Duck(){}

};

#endif // DUCK_H
