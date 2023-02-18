#ifndef _IVISITABLE_H_
#define _IVISITABLE_H_
#include "Knight.h"
#include "Spikeman.h"
#include "Swordman.h"

class Knight;
class Spikeman;
class Swordman;
class IVisitable {
public:
	IVisitable();
	virtual void attack(shared_ptr<Knight>);
	virtual void attack(shared_ptr<Spikeman>);
	virtual void attack(shared_ptr<Swordman>);
	virtual void hitBy(shared_ptr<Knight>);
	virtual void hitBy(shared_ptr<Spikeman>);
	virtual void hitBy(shared_ptr<Swordman>);
};

#endif