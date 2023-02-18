#pragma once
#include "RandomGenerator.h"

class SoldierFactory {
private:
	inline static shared_ptr<SoldierFactory> _instance = NULL;
	RandomGenerator _rng;
	SoldierFactory();
public:
	static shared_ptr<SoldierFactory> instance();
	shared_ptr<Soldier> create();
};

