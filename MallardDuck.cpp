#include "MallardDuck.h"
#include <iostream>
#include "FlyingBehaviors.h"
#include "QuackingBehavior.h"
void mallardDuck::display() {
	std::cout << "a mallard duck appears.";
}
FlyHigh flyhigh;
LoudQuack loudQuack;
mallardDuck::mallardDuck() :duck(flyhigh,loudQuack){
}
