#include "SoldierFactory.h"

SoldierFactory::SoldierFactory() {
}

shared_ptr<SoldierFactory> SoldierFactory::instance() {
	if (_instance == NULL) {
		SoldierFactory* soldierFactory = new SoldierFactory();
		_instance = make_shared<SoldierFactory>(*soldierFactory);
	}
	return _instance;
}

shared_ptr<Soldier> SoldierFactory::create() {
	int type = _rng.next(3);
	shared_ptr<Soldier> soldier;
	switch (type) {
	case 0:
		soldier = make_shared<Knight>();
		break;
	case 1:
		soldier = make_shared<Spikeman>();
		break;
	case 2:
		soldier = make_shared<Swordman>();
		break;
	}
	return soldier;
}
