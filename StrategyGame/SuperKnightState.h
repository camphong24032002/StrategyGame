#pragma once
#include "State.h"
class SuperKnightState : public State {
public:
    int transformHp(int);
    int transformAtk(int);
};

