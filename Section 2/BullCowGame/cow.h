#pragma once
#include "weapon.h"
#include<vector>
using std::string;
using std::vector;
class Cow {
public:
	Cow();
	~Cow();
	string getWeaponName();
	

private:
	string name;
	Weapon* leftHand;
	Weapon* rightHand;
	vector<Weapon> backpack;
}