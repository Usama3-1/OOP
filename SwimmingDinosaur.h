#pragma once
#include "Dinosaur.h"
using namespace std;
#include <iostream>

class SwimmingDinosaur :public Dinosaur 
{
public:

	SwimmingDinosaur(string n, int s,int a);

private:
	int swimming_speed;
public:
	void swim(int time);
	void ShowDistanceCovered();
	
};

