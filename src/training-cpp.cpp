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

	cout << "Exercises and basic algorithms in C++" << endl;

	/* Principe du flux IO Stream */
	cout << "Veuillez rentrer deux entiers," << endl;
	cin >> n >> m;
	cout << "Le résultat de la multiplication est : " << (n * m)<< endl;

	swap(n, m);
	cout << n << " " << m << endl;

	/*Nb de paramètres non défini à l'avance : */
	print({1.5, 2.3});
	print({});

	cout << mail("cuadrado", "guillaume") << endl;

	cout << "Il y a " << nb_char(myString, 'l') << "'l' dans ma chaîne." << endl;

	cout << carre(5) << endl;

	cout << minimum(m, n) << endl;
	cout << minimum(x, y) << endl;

	alloc_dynamique();

	// Fonction moyenne avec vecteurs
	if(moyenne(5)) {
		cout << "Erreur dans le paramètre de la fonction moyenne" << endl;
		return 1;
	}

	// Utilisation des vecteurs 2 dimensions
	for (auto elt : matrice) {
		for (auto e : elt) {
			cout << e << " ";
		}
		cout << endl;
	}

	return 0;
}
