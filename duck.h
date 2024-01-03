#ifndef DUCK_H
#define DUCK_H

#include <string>
#include "FlyingBehaviors.h"
#include "QuackingBehavior.h"

class duck {
private:
	static std::string color;
	
public:
	void swim();
	void virtual display() = 0;
	void performFly();
	void performQuack();
	FlyingBehavior& flyBehavior;
	QuackingBehavior& quackBehavior;
	duck(FlyingBehavior&,QuackingBehavior&);
	
};



#endif // !DUCK_H	
