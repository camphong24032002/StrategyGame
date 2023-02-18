#pragma once
#include "SuperKnightRule.h"
#include "SuperSpikemanRule.h"
#include "SuperSwordmanRule.h"
#include "Team.h"
class Game {
private:
	Team _team1;
	Team _team2;
	vector<shared_ptr<Rule>> _rules;
	RandomGenerator _rng;
public:
	Game();
	void checkRule(shared_ptr<Team>);
	void start();
	string play(int);
	string toString();
};

