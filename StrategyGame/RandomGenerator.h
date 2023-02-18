#pragma once
#include "Knight.h"
#include "Spikeman.h"
#include "Swordman.h"
#include <iostream>
#include <ctime>
#include <map>

class RandomGenerator {
public:
	RandomGenerator();
	int next();
	int next(int);
	int next(int, int);
};

