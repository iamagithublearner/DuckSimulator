#include "QuackingBehavior.h"
#include <iostream>
void Squeak::quack() {
	std::cout << "Squeak!!"<<std::endl;
}

void SilentQuack::quack() {
	std::cout << "..."<<std::endl;
}

void LoudQuack::quack() {
	std::cout << "QUACK QUACK!!";
}
