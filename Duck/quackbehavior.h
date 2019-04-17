#ifndef QUACKBEHAVIOR_H
#define QUACKBEHAVIOR_H

#include <iostream>
#define  xxxx '\n'

using std::cout;
using std::endl;

class QuackBehavior
{
public:
	virtual ~QuackBehavior();
	virtual void quack() = 0;
};

#endif // QUACKBEHAVIOR_H
