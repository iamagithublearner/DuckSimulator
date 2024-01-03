#pragma once

class FlyingBehavior {
public:
	virtual void fly() = 0;
};

class FlyNoWings :public FlyingBehavior {
	void fly() override;
};

class FlyHigh :public FlyingBehavior {
	void fly() override;
};