#include <iostream>
#include <string>
#include <vector>
#include "Rental.h"
#include "Kunde.h"

using namespace std;

vector<Kunde> Rental::add_client(vector<Kunde> v, int id, string name)
{
	Kunde k(id, name);
	v.push_back(k);
	return vector<Kunde>(v);
}

vector <Kunde> Rental::delete_client(vector<Kunde> v, int i)
{
	v.erase(i);
	return vector<Kunde>(v);
}

vector <Kunde> Rental::update_client(vector<Kunde> v, int i, int id, string name)
{
	Kunde k(id,name);
	v[i] = k;
	return vector<Kunde>(v);
}
vector <Auto> Rental::add_auto(vector<Auto> a, int id, string make, string modell)
{
	Auto at(id, make, modell);
	a.push_back(at);
	return vector<Auto>(a);
}
vector <Auto> Rental::delete_auto(vector<Auto> a, int i)
{
	a.erase(i);
	return vector<Auto>(a);
}

