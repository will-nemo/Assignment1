// File: CrazyRandomSword.h
// Author: Will Lambert
//
// 10/11/17

#include <string>
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

class CrazyRandomSword : public Weapon {
public:

	CrazyRandomSword() : Weapon("Crazy Random Sword", rand() % 100 + 11);{
	}
	virtual ~CrazyRandomSword() {};
	virtual double hit (double armor);
};

#endif
