/*
 * basic.h
 *
 *  Created on: 16 janv. 2021
 *      Author: quad
 */

#ifndef BASIC_H_
#define BASIC_H_

#include <iostream>
using namespace std;

#define LINE_MAX 15

int moyenne(unsigned int nb_notes);
void alloc_dynamique();
template <typename T> T minimum(T a, T b);
void swap(int & a, int & b);
void print(initializer_list<float> val);
string mail(string nom, string prenom);
int nb_char(string str, char c);


#endif /* BASIC_H_ */
