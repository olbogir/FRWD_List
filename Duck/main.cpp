#include <iostream>

#include "duck.h"
#include "mallardduck.h"
#include "flybehavior.h"
#include "flynoway.h"
#include "flywithwings.h"
#include "quackbehavior.h"
#include "quack.h"
#include "mutequack.h"
#include "squeak.h"

#define  xxxx '\n'

using std::cout;
using std::endl;


using namespace std;

int main()
{

	MallardDuck MD;


	return 0;
}




/*
#include <iostream>

using namespace std;

class IFlyBehavior
{
public:
	virtual void fly() = 0;
};

class FlyWithWings : public IFlyBehavior
{
public:
	void fly() override
	{
		cout << "fly!";
	}
};
class FlyNoWay : public IFlyBehavior
{
public:
	void fly() override
	{
		cout << "no fly!";
	}
};

class IQuackBehavior
{
public:
	virtual void quack() = 0;
};
class Quack : public IQuackBehavior
{
public:
	void quack() override
	{
		cout << "Quack!";
	}
};
class Squeak : public IQuackBehavior
{
public:
	void quack() override
	{
		cout << "Squeak!";
	}
};
class MuteQuack : public IQuackBehavior
{
public:
	void quack() override
	{
		cout << "Can't quack";
	}
};

class Duck : public IFlyBehavior, IQuackBehavior
{
public:
	FlyWithWings* fly_behavior;
	Quack* quack_behavior;
	void swim()
	{
		cout << "Swim!";
	}
	virtual void display() = 0;
	void quack() override
	{
		quack_behavior->quack();
	}
	void fly() override
	{
		fly_behavior->fly();
	}
};

class MallardDuck : public Duck
{
public:
	MallardDuck()
	{
		quack_behavior = new Quack();
		fly_behavior = new FlyWithWings();
	}

	void display() override
	{
		cout << "Mallard!";
	}
};
class RedheadDuck : public Duck
{
public:
	void display() override
	{
		cout << "RedHead!";
	}
};
class DecoyDuck : public Duck
{
public:
	void display() override
	{
		cout << "DecoyDuck!";
	}
};
class RubberDuck : Duck
{
public:
	void display() override
	{
		cout << "RubberDuck!";
	}
};


int main()
{
	Duck* md = new MallardDuck;
	md->fly();
	md->quack();
	return 0;
}
*/
