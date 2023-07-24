/*
 * Glisse.h
 *
 *  Created on: 9 févr. 2021
 *      Author: quad
 */

#ifndef GLISSE_H_
#define GLISSE_H_

class Glisse {
protected:
	bool helmetOn;
	bool kneePadsOn;
	bool wristGuardsOn;
public:
	Glisse();
	virtual ~Glisse();
	void getOffHelmet() { helmetOn = false; } //Ne pas reproduire dans la vraie vie :)
};

#endif /* GLISSE_H_ */
