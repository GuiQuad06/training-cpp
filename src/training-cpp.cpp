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

	cout << "Exercises and basic algorithms in C++" << endl;

	smart_pointer();

	return 0;
}
