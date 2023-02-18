#include "Knight.h"

Knight::Knight() {
	_hp = 1500;
	_atk = 18;
	_state = make_shared<NormalState>();
}

void Knight::attack(shared_ptr<Knight> other) {
	other->hitBy(make_shared<Knight>(*this));
	if (other->isAlive()) {
		this->hitBy(other);
	}
}
void Knight::attack(shared_ptr<Spikeman> other) {
	other->hitBy(make_shared<Knight>(*this));
	if (other->isAlive()) {
		this->hitBy(other);
	}
}
void Knight::attack(shared_ptr<Swordman> other) {
	other->hitBy(make_shared<Knight>(*this));
	if (other->isAlive()) {
		this->hitBy(other);
	}
}
void Knight::hitBy(shared_ptr<Knight> other) {
	_hp = _hp - other->Atk();
}
void Knight::hitBy(shared_ptr<Spikeman> other) {
	_hp = _hp - (other->Atk() + 25);
}
void Knight::hitBy(shared_ptr<Swordman> other) {
	_hp = _hp - other->Atk();
}

string Knight::toString() {
	stringstream ss;
	ss << "Knight HP=" << Hp() << " ATK=" << Atk();
	string result = ss.str();
	return result;
}
