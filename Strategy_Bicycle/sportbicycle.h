#ifndef SPORTBICYCLE_H
#define SPORTBICYCLE_H

#include "ibicycle.h"


class SportBicycle: public IBicycle
{
public:
	void TwistTheWheel() override;
	void Ride() override;
};

#endif // SPORTBICYCLE_H
