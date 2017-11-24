// ExposantRecursif.cpp
// fait par Jonathan Dubreuil
// 2017-11-23
// Definition de la classe ExposantRecursif
#include "ExposantRecursif.h"
#include <iostream>
using namespace std;

ExposantRecursif::ExposantRecursif(int base, int exposant)
{
	Reponse_ = FonctionRecursive(base, exposant);
}

double ExposantRecursif::FonctionRecursive(int base, int exposant)
{
	if (exposant == 0)
		return 1;
	else if (exposant > 0)
		return base * FonctionRecursive(base, exposant-1);
	else
		return 1 / FonctionRecursive(base, exposant * -1);
}

ExposantRecursif::operator double() const
{
	return Reponse_;
}