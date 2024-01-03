#pragma once

#include "duck.h"
#include "FlyingBehaviors.h"
class mallardDuck :public duck, public FlyingBehavior, public QuackingBehavior {
public:
	void display() override;
	mallardDuck();
};