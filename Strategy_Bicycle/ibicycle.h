#ifndef IBICYCLE_H
#define IBICYCLE_H

#include <iostream>
#define  xxxx '\n'

using std::cout;
using std::endl;

class IBicycle
{
public:
	virtual void TwistTheWheel() = 0;
	virtual void Ride() = 0;
	virtual ~IBicycle();
};

#endif // IBICYCLE_H
