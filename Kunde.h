#pragma once
# include <iostream>
#include <string>

using namespace std;

class Kunde
{
private:
	int kid;
	string name;
public:
	//constructor
	Kunde();
	Kunde(int id, string n);
	~Kunde();
};