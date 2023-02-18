#pragma once
#include "State.h"
class NormalState : public State {
public:
    int transformHp(int);
    int transformAtk(int);
};

