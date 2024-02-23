/*
 * stl-test.cpp
 *
 *  Created on: 10 févr. 2021
 *      Author: quad
 */

#include "stl-test.h"

void test_case_list()
{
	list <string> my_list(5); //Liste construite avec 5 chaînes
	list <float> list1 = {2.2, 5.5, 6.6, 1.1, 44.4, 3.3, 10, 8.8};
	list <float> list2 = {1.1, 7.7, 9.9, 5.5};
	list <string>::iterator il;

	// J'insert des éléments
	for (il = my_list.begin() ; il != my_list.end() ; il++) {
		my_list.insert(il, "coucou"); //Insert "Coucou" à chaque itération de il
	}

	for (auto elmt : my_list) {
		cout << elmt << endl;
	}

	// J'efface les éléments
	my_list.erase(my_list.begin(), my_list.end()); //Efface "Coucou" à chaque itération de il

	for (auto elmt : my_list) {
		cout << elmt;
	}

	list1.sort();
	list2.sort();
	list1.merge(list2);

	for (auto elmt : list1) {
		cout << elmt << " ";
	}
}

void test_case_vector()
{
	vector <int> my_vector(10);
	vector <int> v1(3);

	my_vector.push_back(5);
	my_vector.push_back(2);
	my_vector.push_back(8);
	my_vector.pop_back();
	my_vector.push_back(6);
	my_vector.pop_back();

	for (auto i = 0 ; i < my_vector.size() ; i++) {
		cout << my_vector.at(i) << endl;
	}

	auto iv = find (my_vector.begin(), my_vector.end(), 5);

	// J'insert v1 avant l'index qui pointe sur la valeur '5'
	if(iv != my_vector.end()) {
		my_vector.insert(iv, v1.begin(), v1.end());
	}

	for (auto x : my_vector) {
		cout << x ;
	}
}

/** Same as vector but with front insertions
 * (push_front pop_front)
 * Use case : the FIFO ! */
void test_case_decque()
{
	deque <string> my_string(10);

	my_string.push_back("Hibou");
	my_string.push_back("Coucou");

	for (auto i = 0 ; i < my_string.size() ; i++) {
		cout << my_string.at(i) << endl;
	}

	my_string.push_front("Coucou");

	for (auto x : my_string) {
		cout << x ;
	}
}

/** Stack is a superset of seq containers for LIFO */
int test_case_stack()
{
	stack <int, vector<int> > st1; // Stack de int

	for(int i = 0 ; i < 10 ; i++) {
		st1.push(2 * i);
	}

	cout << st1.top() << endl;

	while(!(st1.empty())) {
		st1.pop();
	}
	return 0;
}

/** Stack is a superset of seq containers for FIFO */
int test_case_queue()
{
	queue<string, deque<string>> qu1;
	char str[2];
	const string str_base = "I am the number ";

	for(int i = 0 ; i < 10 ; i++) {
		sprintf(str, "%d", i);
		qu1.push(str_base + str);
	}

	while(!(qu1.empty())) {
		qu1.pop();
		cout << qu1.front();
	}
	return 0;
}
