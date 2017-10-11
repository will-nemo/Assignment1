// File: SimpleAxe.cpp
// Author: Will Lambert
//
// 10/11/2017

#include "SimpleAxe.h"

double SimpleAxe::hit(double armor) {
 if(armor > 0 && armor < 20){
	return hitpoints;
 }
 else{
	double damage = hitpoints - armor;
	if(damage < 0){
		return 0;
	}
	return damage;
 } 


}
