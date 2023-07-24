/*
 * Platine.cpp
 *
 *  Created on: 1 févr. 2023
 *      Author: quad
 */

#include "Platine.h"

Platine::Platine(int n, string br)
{
	// TODO Auto-generated constructor stub
	nb_roues = n;
	brand = br;

}

Platine::Platine(const Platine & platine)
{
	brand = platine.brand;
	nb_roues = platine.nb_roues;
	wheels = platine.wheels;
}

Platine & Platine::operator =(const Platine & p)
{
	nb_roues = p.nb_roues;
	brand = p.brand;
	wheels = p.wheels;

	return * this;
}

Platine::~Platine()
{
	// TODO Auto-generated destructor stub
}

