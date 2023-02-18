#ifndef _RULE_H_
#define _RULE_H_
#include "Team.h"

class Rule {
public:
	virtual bool satisfyWith(shared_ptr<Team>);
	virtual void apply(shared_ptr<Team>);
};

#endif