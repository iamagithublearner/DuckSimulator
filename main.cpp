#include <string>
#include <iostream>
#include "duck.h"
#include "MallardDuck.h"
#include "RedHeadDuck.h"
#include <string>
void duck::swim() {
	std::cout << "the duck swims";
}

void duck::performFly() {
	flyBehavior.fly();
}

void duck::performQuack() {
	quackBehavior.quack();
}

std::string duck::color = "red";

	

duck::duck(FlyingBehavior& fly, QuackingBehavior& quack) :flyBehavior(fly), quackBehavior(quack) {

}
int main() {
	mallardDuck mDuck;
	mDuck.display();
	return 0;
}