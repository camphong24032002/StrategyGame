#ifndef _SWORDMAN_H_
#define _SWORDMAN_H_
#include "Soldier.h"
#include "IVisitable.h"

class Knight;
class Spikeman;
class Ivisitable;
class Swordman : public Soldier, public IVisitable{
public:
	Swordman();
	void attack(shared_ptr<Knight>);
	void attack(shared_ptr<Spikeman>);
	void attack(shared_ptr<Swordman>);
	void hitBy(shared_ptr<Knight>);
	void hitBy(shared_ptr<Spikeman>);
	void hitBy(shared_ptr<Swordman>);
	string toString();
};

#endif