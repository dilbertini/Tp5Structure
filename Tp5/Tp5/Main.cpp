// main.cpp
// fait par Jonathan Dubreuil
// 2017-11-23
// tester les classes ExposantIteratif et ExposantRecursif
#include <iostream>
#include "ExposantIteratif.h"
#include "ExposantRecursif.h"
using namespace std;

int main()
{
	int Base = 1;
	int Exposant = 1;
	while (Base != 0 || Exposant != 0)
	{
		if (Base == 0 && Exposant == 0)
		{
			cout << "Au revoir." << endl;
		}
		else
		{
			cout << "0 ala 0 pour mettre fin au programme." << endl << endl;
			cout << "Donnez la base : ";
			cin >> Base;
			cout << "Donnez l'exposant : ";
			cin >> Exposant;
			cout << endl << "Reponse iterative : ";
			ExposantIteratif(Base, Exposant);
			cout << endl << "Reponse recursive : ";
			ExposantRecursif(Base, Exposant);
			cout << endl << endl;
		}
	}
}