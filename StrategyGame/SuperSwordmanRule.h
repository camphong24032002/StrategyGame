#pragma once
#include "Rule.h"
#include "SuperSwordmanState.h"

class SuperSwordmanRule : public Rule{
public:
	bool satisfyWith(shared_ptr<Team>);
	void apply(shared_ptr<Team>);
};

