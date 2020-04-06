#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Auto.h"
#include "Kunde.h"

using namespace std;

class Rental
{
private:
	vector <Kunde> client;
	vector <Auto> wagen;
public:
	vector <Kunde> add_client(vector<Kunde> v, int id, string name);
	vector <Kunde> delete_client(vector<Kunde> v, int i);
	vector <Kunde> update_client(vector<Kunde> v, int i, int id, string name);
	vector <Auto> add_auto(vector<Auto> a, int id, string make, string modell);
	vector <Auto> delete_auto(vector<Auto> a, int i);
};