#pragma once
#include<iostream>
#include<string>
using std::string;
class Weapon {
	public:
		string getName();


private:
	string name;
	float weight;
	float sharpness;

};