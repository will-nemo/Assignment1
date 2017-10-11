//File: SimpleAxe.h
//Author: Will Lambert
//
//10/11/17

#include <string>
#include "Weapon.h"

#ifndef SIMPLEAXE_H
#define SIMPLEAXE_H

class SimpleAxe : public Weapon {
public:
     
	SimpleAxe() : Weapon("Simple Axe", 60.0){
	}
	virtual ~SimpleAxe() {};
	virtual double hit(double armor);

};

#endif 
