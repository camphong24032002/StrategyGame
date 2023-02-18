#include "Game.h"

Game::Game() {
	_rules.push_back(make_shared<SuperKnightRule>());
	_rules.push_back(make_shared<SuperSpikemanRule>());
	_rules.push_back(make_shared<SuperSwordmanRule>());
}

void Game::checkRule(shared_ptr<Team> team) {
	for (int i = 0; i < _rules.size(); i++) {
		if (_rules[i]->satisfyWith(team)) {
			_rules[i]->apply(team);
			return;
		}
	}
}

void Game::start() {
	for (int i=0; i<3; i++)
		_team1.add(SoldierFactory::instance()->create());
	for (int i = 0; i < 3; i++)
		_team2.add(make_shared<Spikeman>());
		//_team2.add(SoldierFactory::instance()->create());
	checkRule(make_shared<Team>(_team1));
	checkRule(make_shared<Team>(_team2));
}

string Game::play(int n) {
	stringstream ss;
	vector<Team> team = { _team1,_team2 };
	int turn = _rng.next(2), index1, index2;
	for (int i = 0; i < n; i++) {
		do {
			index1 = _rng.next(3);
		} while (!team[turn].pool[index1]->isAlive());
		do {
			index2 = _rng.next(3);
		} while (!team[(turn + 1) % 2].pool[index2]->isAlive());
		team[turn].pool[index1]->attack(team[(turn + 1) % 2].pool[index2]);
		ss << "Turn " << i + 1 << endl;
		ss << "Player " << turn + 1 << ": " << index1 + 1 << " attack " << index2 + 1 << endl;
		ss << this->toString() << endl;
		if (!team[turn].pool[index1]->isAlive()) {
			Team t = team[turn];
			for (int j = 0; j < t.pool.size(); j++) {
				shared_ptr<Soldier> soldier = t.pool[j];
				soldier->setHp(soldier->Hp() / 2);
				soldier->setState(make_shared<NormalState>());
			}
		}
		if (!team[(turn + 1) % 2].pool[index2]->isAlive()) {
			Team t = team[turn];
			for (int j = 0; j < t.pool.size(); j++) {
				shared_ptr<Soldier> soldier = t.pool[j];
				soldier->setHp(soldier->Hp() / 2);
				soldier->setState(make_shared<NormalState>());
			}
		}
		turn = (turn + 1) % 2;
	}
	string result = ss.str();
	return result;
}

string Game::toString() {
	stringstream ss;
	ss << "Player 1" << endl;
	ss << _team1.toString();
	ss << "Player 2" << endl;
	ss << _team2.toString();
	string result = ss.str();
	return result;
}