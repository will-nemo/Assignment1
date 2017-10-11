//File: CrazyRandomSword.cpp
//Author: Will Lambert
//
//10/11/17

#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor) {
 	double protection = rand() % (armor/2); 
	double damage = hitpoints - protection;
	if(damage < 0){
		return 0;
	}
	return damage;
}
