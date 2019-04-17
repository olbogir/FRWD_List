#ifndef MALLARDDUCK_H
#define MALLARDDUCK_H

#include "duck.h"

class MallardDuck: public Duck
{
public:
	MallardDuck();
	~MallardDuck();
	virtual void display() override;

};

#endif // MALLARDDUCK_H
