// ExposantRecursif.h
// fait par Jonathan Dubreuil
// 2017-11-23
// Declaration de la classe ExposantRecursif
#pragma once


class ExposantRecursif
{
public:
	ExposantRecursif(int base, int exposant);
	operator double() const;
private:
	double Reponse_;
	double FonctionRecursive(int base, int exposant);
};