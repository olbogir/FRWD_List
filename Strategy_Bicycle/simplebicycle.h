#ifndef SIMPLEBICYCLE_H
#define SIMPLEBICYCLE_H

#include "ibicycle.h"

class SimpleBicycle: public IBicycle
{
public:
	void TwistTheWheel() override;
	void Ride() override;
};

#endif // SIMPLEBICYCLE_H
