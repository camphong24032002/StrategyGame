#pragma once
#include "Rule.h"
#include "SuperKnightState.h"

class SuperKnightRule : public Rule {
public:
	bool satisfyWith(shared_ptr<Team>);
	void apply(shared_ptr<Team>);
};
