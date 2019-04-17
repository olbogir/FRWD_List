#ifndef FLYBEHAVIOR_H
#define FLYBEHAVIOR_H

#include <iostream>
#define  xxxx '\n'

using std::cout;
using std::endl;

class FlyBehavior
{
public:
	virtual ~FlyBehavior();
	virtual void fly() = 0;
};

#endif // FLYBEHAVIOR_H
