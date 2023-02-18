#ifndef _SPIKEMAN_H_
#define _SPIKEMAN_H_
#include "Soldier.h"
#include "IVisitable.h"

class Knight;
class Swordman;
class Ivisitable;
class Spikeman : public Soldier, public IVisitable {
public:
	Spikeman();
	void attack(shared_ptr<Knight>);
	void attack(shared_ptr<Spikeman>);
	void attack(shared_ptr<Swordman>);
	void hitBy(shared_ptr<Knight>);
	void hitBy(shared_ptr<Spikeman>);
	void hitBy(shared_ptr<Swordman>);
	string toString();
};

#endif