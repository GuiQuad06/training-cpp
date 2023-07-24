/*
 * smart-pointer.cpp
 *
 *  Created on: 20 janv. 2021
 *      Author: quad
 */

#include "smart-pointer.h"
#include <iostream>
#include <memory>

using namespace std;

void smart_pointer()
{
	unique_ptr<int> upi {new int (15)}; // Pas nécessaire de libérer l'espace alloué !!
	auto addr1 = make_unique <char> ('A');
	auto addr2 = make_unique <char> ('Z'); // constructeur d'un unique_ptr

	cout << "L'adresse de upi est : " << upi.get() << endl;
	addr2 = move(addr1); // Valeur de addr1 pointée par addr2
	cout << *addr2 << endl;

	auto addr3 = make_shared <int> (35);
	cout << "il y a " << addr3.use_count() << "pointeurs sur *addr3" << endl;
	shared_ptr <int> addr4 (addr3); // addr4 pointe sur la même valeur que addr3
	cout << "il y a " << addr3.use_count() << "pointeurs sur *addr3" << endl;


}
