#include "RedHeadDuck.h"
#include <iostream>
void redHeadDuck::display() {
	std::cout << "a red head duck apppears.";
}
Squeak squeak;
FlyHigh flyhigh;
redHeadDuck::redHeadDuck() :duck(flyhigh,squeak){
}
