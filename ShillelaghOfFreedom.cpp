//File: ShillelaghOfFreedom.cpp
//Author: Will Lambert
//
// 10/11/17


#include "ShillelaghOfFreedom.h"

double ShillelaghOfFreedom::hit(double armor) {
	double damage = hitPoints - (armor * 0.9);
	if (damage < 0) {
		return 0;
	}
	return damage;
}
