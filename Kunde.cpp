#include <iostream>
#include <string>
#include "Kunde.h"

using namespace std;

Kunde::Kunde()
{
	kid = NULL;
	name = "";
}

Kunde::Kunde(int id, string n)
{
	kid = id;
	name = n;
}

Kunde::~Kunde()
{

}