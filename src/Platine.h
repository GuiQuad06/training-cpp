/*
 * Platine.h
 *
 *  Created on: 1 févr. 2023
 *      Author: quad
 */

#ifndef PLATINE_H_
#define PLATINE_H_

#include <vector>
#include <iostream>

using namespace std;

class Platine {
private:
	int nb_roues;
	string brand;
	vector<string> wheels;

public:
	Platine() : nb_roues(4), brand("kaltik"){}; // Constructeur défaut
	Platine(int , string);						// Constructeur
	Platine(const Platine &);					// Constructeur de recopie
	Platine & operator =(const Platine & p);
	virtual ~Platine();							// Desctructeur
};

#endif /* PLATINE_H_ */
