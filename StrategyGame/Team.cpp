#include "Team.h"

Team::Team() {

}

void Team::add(shared_ptr<Soldier> s) {
	pool.push_back(s);
}

string Team::toString() {
	stringstream ss;
	ss << "Team info:\n";
	for (int i = 0; i < pool.size(); i++)
		ss << i+1 << ". " << pool[i]->toString() << endl;
	string result = ss.str();
	return result;
}