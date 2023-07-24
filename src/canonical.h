/*
 * canonical.h
 *
 *  Created on: 8 févr. 2023
 *      Author: quad
 */

#ifndef CANONICAL_H_
#define CANONICAL_H_

class T {
public:
	T();
	virtual ~T();
	T (const T &other);
	T & operator=(const T &other);
};

#endif /* CANONICAL_H_ */
