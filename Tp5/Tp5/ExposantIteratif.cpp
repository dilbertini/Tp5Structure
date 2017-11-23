#include "ExposantIteratif.h"
#include <iostream>
using namespace std;

ExposantIteratif::ExposantIteratif(int base, int exposant)
{
	double solution = 1;
	if (exposant > 0)
	{
		for (int i = 1; i <= exposant; i++)
		{
			solution = solution*base;
		}
	}
	else if(exposant == 0)
	{
		solution = 1;
	}
	else
	{
		for (int i = -1; i >= exposant; i--)
		{
			solution = solution*base;
		}
		solution = 1 / solution;
	}
	cout << solution;
}