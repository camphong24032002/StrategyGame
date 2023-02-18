#ifndef _KNIGHT_H_
#define _KNIGHT_H_
#include "Soldier.h"
#include "IVisitable.h"

class Spikeman;
class Swordman;
class Ivisitable;
class Knight : public Soldier, public IVisitable {
public:
	Knight();
	void attack(shared_ptr<Knight>);
	void attack(shared_ptr<Spikeman>);
	void attack(shared_ptr<Swordman>);
	void hitBy(shared_ptr<Knight>);
	void hitBy(shared_ptr<Spikeman>);
	void hitBy(shared_ptr<Swordman>);
	string toString();
};

#endif