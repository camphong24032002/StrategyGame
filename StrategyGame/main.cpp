#include "Game.h"
#include <iostream>

int main() {
	Game game;
	game.start();
	cout << "Before battle:\n";
	cout << game.toString() << endl;
	cout << game.play(3) << endl;
	cout << "After battle:\n";
	cout << game.toString() << endl;
	cin.get();
	return 0;
}