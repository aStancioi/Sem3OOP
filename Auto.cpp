#include<iostream>
#include<string>
#include"Auto.h"

using namespace std;

Auto::Auto()
{
	aid = NULL;
	marke = "";
	modell = "";
}

Auto::Auto(int id, string ma, string mo)
{
	aid = id;
	marke = ma;
	modell = mo;
}

Auto::~Auto()
{

}