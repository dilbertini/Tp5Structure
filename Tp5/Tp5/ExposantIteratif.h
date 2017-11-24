// ExposantIteratif.h
// fait par Jonathan Dubreuil
// 2017-11-23
// Declaration de la classe ExposantIteratif
#pragma once


class ExposantIteratif
{
	double Reponse_;
public:
	ExposantIteratif(int base, int exposant);
	operator double() const;
};