#ifndef MUTEQUACK_H
#define MUTEQUACK_H

#include "duck.h"
#include "quackbehavior.h"

class MuteQuack : public QuackBehavior
{
public:

	void quack() override;
};

#endif // MUTEQUACK_H
