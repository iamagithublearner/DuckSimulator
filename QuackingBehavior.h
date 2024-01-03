#pragma once

class QuackingBehavior {
public:
	virtual void quack() = 0;
};

class Squeak : public QuackingBehavior {
public:
	void quack() override;
};

class SilentQuack : public QuackingBehavior {
	void quack() override;
};

class LoudQuack : public QuackingBehavior {
	void quack() override;
};