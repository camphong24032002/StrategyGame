#pragma once
#include "Rule.h"
#include "SuperSpikemanState.h"

class SuperSpikemanRule : public Rule {
public:
	bool satisfyWith(shared_ptr<Team>);
	void apply(shared_ptr<Team>);
};