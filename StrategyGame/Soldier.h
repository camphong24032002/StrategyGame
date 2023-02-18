#ifndef _SOLDIER_H_
#define _SOLDIER_H_
#include "NormalState.h"
#include <string>
#include <sstream>
#include <memory>
#include <vector>
using namespace std;
class Soldier {
protected:
	int _hp;
	int _atk;
	shared_ptr<State> _state;
public:
	Soldier();
	int Hp();
	int Atk();
	void setHp(int);
	void setAtk(int);
	virtual string toString();
	bool isAlive();
	void setState(shared_ptr<State>);
};

#endif