#include "SuperKnightRule.h"

bool SuperKnightRule::satisfyWith(shared_ptr<Team> team) {
    int count = 0;
    for (int i = 0; i < team->pool.size(); i++) {
        if (typeid(*team->pool[i]) == typeid(Knight))
            count++;
    }
    return count == 3;
}
void SuperKnightRule::apply(shared_ptr<Team> team) {
    for (int i = 0; i < team->pool.size(); i++) {
        team->pool[i]->setState(make_shared<SuperKnightState>());
    }
}