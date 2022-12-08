#pragma once
#include<iostream>
#include <Windows.h>
using namespace std;

class Drob
{
	int chislitel;
	int znamenatel;
public:
	void setChisl() {
		cin >> chislitel ;
	}
	void setZnamenatel() {
		cin >> znamenatel ;
	}

	void sum(Drob& d) {
		chislitel + d.chislitel;
	}
	void razn(Drob& d) {
		chislitel - d.chislitel;
	}
	void umnoj(Drob& d) {
		chislitel* d.chislitel;
	}
	void del(Drob& d) {
		chislitel / d.chislitel;
	}
};

