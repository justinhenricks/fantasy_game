#pragma once
#include "stdafx.h"

template <class E>
class Creatures{
private:
	E fighters[4];
	int num;
public:
	Creatures();
	void addFighter(E);
};

template <class E>
Creatures<E>::Creatures(){ //constructor
	num = 0;
} 

template<class E>
void Creatures<E>::addFighter(E fighter){
	
}