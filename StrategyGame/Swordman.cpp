#include "Swordman.h"

Swordman::Swordman() {
	_hp = 1000;
	_atk = 12;
	_state = make_shared<NormalState>();
}

void Swordman::attack(shared_ptr<Knight> other) {
	other->hitBy(make_shared<Swordman>(*this));
	if (other->isAlive()) {
		this->hitBy(other);
	}
}
void Swordman::attack(shared_ptr<Spikeman> other) {
	other->hitBy(make_shared<Swordman>(*this));
	if (other->isAlive()) {
		this->hitBy(other);
	}
}
void Swordman::attack(shared_ptr<Swordman> other) {
	other->hitBy(make_shared<Swordman>(*this));
	if (other->isAlive()) {
		this->hitBy(other);
	}
}
void Swordman::hitBy(shared_ptr<Knight> other) {
	_hp = _hp - (other->Atk() + 10);
}
void Swordman::hitBy(shared_ptr<Spikeman> other) {
	_hp = _hp - other->Atk();
}
void Swordman::hitBy(shared_ptr<Swordman> other) {
	_hp = _hp - other->Atk();
}

string Swordman::toString() {
	stringstream ss;
	ss << "Swordman HP=" << Hp() << " ATK=" << Atk();
	string result = ss.str();
	return result;
}