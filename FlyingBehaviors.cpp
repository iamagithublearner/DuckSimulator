#include "FlyingBehaviors.h"
#include <iostream>
void FlyNoWings::fly(){
	std::cout << "The duck does not fly";
}

void FlyHigh::fly() {
	std::cout << "The duck flies high";
}
