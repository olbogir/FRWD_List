#ifndef QUACK_H
#define QUACK_H

#include "quackbehavior.h"


class Quack : public QuackBehavior
{
public:
	void quack() override;
};

#endif // QUACK_H
