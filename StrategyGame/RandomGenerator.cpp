#include "RandomGenerator.h"

RandomGenerator::RandomGenerator() {
	srand(time(NULL));
}

int RandomGenerator::next() {
	int result = rand();
	return result;
}

int RandomGenerator::next(int n) {
	int result = rand() % n;
	return result;
}

int RandomGenerator::next(int a, int b) {
	int result = rand() % (b - a + 1) + a;
	return result;
}