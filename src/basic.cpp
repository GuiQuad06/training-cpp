/*
 * basic.cpp
 *
 *  Created on: 16 janv. 2021
 *      Author: quad
 */

#include "basic.h"
#include <vector>

int moyenne(unsigned int nb_notes)
{
	vector <float> notes (nb_notes); //Comme un tableau mais sans limite de taille
	float acc, moyenne;
	unsigned int i, bonne_note = 0;

	if(nb_notes <= 0)
		return 1;

	for(i = 0 ; i < nb_notes ; i++) {
		cout << "Veuillez saisir la note n° " << i+1 << endl;
		cin >> notes[i];
	}

	for(auto note : notes) { //Très pratique cette syntaxe de boucle
		if(note > 15)
			bonne_note++;
		acc += note;
	}

	moyenne = acc / nb_notes;
	cout << "La moyenne est de " << moyenne << endl;
	cout << "Il y a" << bonne_note << "bonnes notes" << endl;

	return 0;
}

/* Fonction d'échange passage param par référence */
void swap(int & a, int & b)
{
	int tmp;
	tmp = b;
	b = a;
	a = tmp;
}

void alloc_dynamique()
{
	auto addr1 = new int ; // Alloue un espace mémoire int * pour accueillir un int
	auto addr2 = new int {2}; // Pareil avec init de la valeur à l'emplacement
	auto addr3 = new char {'A'};

	*addr1 = 20;
	swap(addr1, addr2);

	cout << "\nValeur à addr1 =" << *addr1 << "\nValeur à addr2 =" << *addr2 << endl;

	//Je libère l'espace alloué
	delete addr1;
	delete addr2;
	delete addr3;
	//Je libère les pointeurs
	addr1 = nullptr;
	addr2 = nullptr;
	addr3 = nullptr;
}

/* Mot clé auto permet de laisser le compilateur choisir le type selon paramètre */
auto f(int n)
{
	return 5 + n;
}

/* Fonction à nombre variable d'arguments */
void print(initializer_list<float> val)
{
	cout << val.size() << "Valeurs: " << endl;
	for( float v : val) cout << v << " " ;
	cout << endl;
}

string mail(string nom, string prenom)
{
	if(!nom.empty() && !prenom.empty()) {
		return (prenom + "." + nom + "@gmail.com");
	}
}

int nb_char(string str, char c)
{
	int cpt = 0 ;

	if(str.size() > LINE_MAX) {
		printf("Petit problème dans ma plantation\n");
		return -1;
	}
	else {
		for (auto car : str) {
			if(car == c)
				cpt++;
		}
	}
	return cpt;
}
