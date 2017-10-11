//File: ShillelaghOfFreedom.h
//Author: Will Lambert
//
//10/11/17

#include <string>
#include "Weapon.h"

#ifndef SHILLELAGHOFFREEDOM_H
#define SHILLELAGHOFFREEDOM_H

class ShillelaghOfFreedom : public Weapon {
 
	ShillelaghOfFreedom() : Weapon("Shillelagh of Freedom", 70.0){
	}
	virtual ~ShillelaghOfFreedom() {};
	virtual double hit (double armor);


};

#endif
