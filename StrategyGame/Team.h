#ifndef _TEAM_H_
#define _TEAM_H_
#include "SoldierFactory.h"
class Team {
private:
	string _name;
public:
	Team();
	vector<shared_ptr<Soldier>> pool;
	void add(shared_ptr<Soldier>);
	string toString();
};

#endif