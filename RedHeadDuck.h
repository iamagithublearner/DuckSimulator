#pragma once

#include "duck.h"
#include "FlyingBehaviors.h"
#include "QuackingBehavior.h"
class redHeadDuck : public duck, public FlyingBehavior, public QuackingBehavior {

public:
	void display() override;
	redHeadDuck();
};