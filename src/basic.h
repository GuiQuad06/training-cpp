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

template <typename T> 
inline T minimum(T a, T b)
{
	return (a < b ? a : b);
}

int moyenne(unsigned int nb_notes);
void alloc_dynamique();
void swap(int & a, int & b);
void print(initializer_list<float> val);
string mail(string nom, string prenom);
int nb_char(string str, char c);


#endif /* BASIC_H_ */
