#pragma once
#include <iostream>
#include <string>

using namespace std;

class Auto
{
private:
	int aid;
	string marke;
	string modell;
public:
	Auto();
	Auto(int id, string ma, string mo);
	~Auto();
};