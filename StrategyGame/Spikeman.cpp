#include "Spikeman.h"

Spikeman::Spikeman() {
	_hp = 800;
	_atk = 8;
	_state = make_shared<NormalState>();
}

void Spikeman::attack(shared_ptr<Knight> other) {
	other->hitBy(make_shared<Spikeman>(*this));
	if (other->isAlive()) {
		this->hitBy(other);
	}
}
void Spikeman::attack(shared_ptr<Spikeman> other) {
	other->hitBy(make_shared<Spikeman>(*this));
	if (other->isAlive()) {
		this->hitBy(other);
	}
}
void Spikeman::attack(shared_ptr<Swordman> other) {
	other->hitBy(make_shared<Spikeman>(*this));
	if (other->isAlive()) {
		this->hitBy(other);
	}
}
void Spikeman::hitBy(shared_ptr<Knight> other) {
	_hp = _hp - other->Atk();
}
void Spikeman::hitBy(shared_ptr<Spikeman> other) {
	_hp = _hp - other->Atk();
}
void Spikeman::hitBy(shared_ptr<Swordman> other) {
	_hp = _hp - (other->Atk() + 12);
}

string Spikeman::toString() {
	stringstream ss;
	ss << "Spikeman HP=" << Hp() << " ATK=" << Atk();
	string result = ss.str();
	return result;
}