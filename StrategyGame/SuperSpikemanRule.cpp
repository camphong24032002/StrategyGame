#include "SuperSpikemanRule.h"

bool SuperSpikemanRule::satisfyWith(shared_ptr<Team> team) {
    int count = 0;
    for (int i = 0; i < team->pool.size(); i++) {
        if (typeid(*team->pool[i]) == typeid(Spikeman))
            count++;
    }
    return count == 3;
}
void SuperSpikemanRule::apply(shared_ptr<Team> team) {
    for (int i = 0; i < team->pool.size(); i++) {
        shared_ptr<Soldier> soldier = team->pool[i];
        soldier->setState(make_shared<SuperSpikemanState>());
        soldier->setHp(soldier->Hp() * 2);
    }
}