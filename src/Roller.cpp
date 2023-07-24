/*
 * Roller.cpp
 *
 *  Created on: 22 janv. 2021
 *      Author: quad
 */

#include "Roller.h"

Roller::Roller(string b, string m, bool UFS) : UFS(UFS)
{
	brand = b;
	model = m;
	platine = new Platine();
	++cpt;

}

Roller::Roller(const Roller & r) : UFS(r.UFS)
{
	brand = r.brand;
	model = r.model;
	platine = new Platine();
	++cpt;
}

void Roller::display()
{
	cout << "Ce sont des Rollers " << this->brand + this->model << endl;

}

//Surcharge de l'opérateur d'affectation
Roller & Roller::operator =(const Roller & r)
{
	if(this != &r) {
		delete platine;
		brand = r.brand;
		model = r.model;
		platine = new Platine();
	}

	return * this;
}

Roller::~Roller()
{
	--cpt;
	delete platine;
	// Destructeur surtout utile qi allocation dynamique, ouverture fichier, connexions...
}

bool brand_compare(const Roller & a, const Roller & b)
{
	return (a.brand == b.brand);
}
