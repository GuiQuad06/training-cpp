/*
 * Roller.h
 *
 *  Created on: 22 janv. 2021
 *      Author: quad
 */

#ifndef ROLLER_H_
#define ROLLER_H_

#include <iostream>
#include <vector>
#include "Platine.h"
#include "Glisse.h"

using namespace std;

class Roller : public Glisse { //Roller hérite de Glisse

private :

	static int cpt ;
	string brand;
	string model;
	bool UFS;
	Platine *platine;

public:
	static void cpt_status() { cout << "Il y a " << cpt << "Rollers dans la base" << endl; }
	void display();
	Roller() : brand("Razors"), model("Cult"), UFS(true) { platine = new Platine(); cpt++; } //Inline constructor
	Roller(string, string, bool);									//Surdéfinition du constructeur
	Roller(const Roller &); 										//Constructeur de recopie
	Roller & operator =(const Roller &);
	friend bool brand_compare(const Roller &, const Roller &);		//Fonction amie
	virtual ~Roller();

};

#endif /* ROLLER_H_ */
