#include "Soldier.h"

Soldier::Soldier() {
	_hp = 0;
	_atk = 0;
	_state = make_shared<NormalState>();
}

int Soldier::Hp() {
	return _hp;
}

int Soldier::Atk() {
	return _state->transformAtk(_atk);
}

void Soldier::setHp(int hp) {
	_hp = hp > 0 ? hp : 0;
}

void Soldier::setAtk(int atk) {
	_atk = atk > 0 ? atk : 0;
}

string Soldier::toString() {
	return "";
}

bool Soldier::isAlive() {
	return _hp >= 0;
}

void Soldier::setState(shared_ptr<State> value) {
	_state = value;
}