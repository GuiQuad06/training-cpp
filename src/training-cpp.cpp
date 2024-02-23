//============================================================================
// Name        : training-cpp.cpp
// Author      : GCO
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

#include "basic.h"
#include "Roller.h"
#include "Glisse.h"
#include "smart-pointer.h"
#include "stl-test.h"

int Roller::cpt = 0; //Variable de classe ne pas init dans une fonction

int main() {

	int n, m;
	float x = 2.2, y = 5.6;

	const int k = 2*n + m; // Expression constante (init lors de la décla)

	string myString("Hello");
	auto str_len = myString.size();

	vector<string> str {"Bonjour", "Bonsoir"};

	vector<vector <int>> matrice {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

	auto carre = [] (double x) { return x*x ; } ;

	Roller my_blades("USD", "AEON", false);		//Instanciation statique d'un objet
	Roller some_blades("USD", "SWAY", false);
	Roller * your_blades = new Roller("ROCES", "M12", true); //Instanciation dynamique d'un objet


	cout << "Exercises and basic algorithms in C++" << endl;

	my_blades.display();
	Roller::cpt_status();

	cout << "rollo" << (brand_compare(my_blades, some_blades) ? "de même marque" : "pas de même marque") << endl;

	delete your_blades; //On libère l'alloc dyna de l'objet
	Roller::cpt_status();

	Roller his_blades;
	his_blades = my_blades; //Affectation par copie d'objet (implicite ou surcharge operator =)
	my_blades.display();
	his_blades.display();

	Glisse * glisse1;
	glisse1 = &my_blades; // Glisse 1 pointe sur my_blades (polymorphisme)

	// Polymorphisme : je pointe sur un objet pour lui faire bénéficier des membres de sa classe parent
	glisse1->getOffHelmet();

	return 0;
}
