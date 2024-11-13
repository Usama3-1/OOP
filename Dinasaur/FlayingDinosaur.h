#pragma once
#include "FlayingDinosaur.h"
#include "SwimmingDinosaur.h"
#include "Dinosaur.h"
using namespace std;
#include <iostream>
class FlayingDinosaur : public Dinosaur
{
public:

	FlayingDinosaur(string n, int s, int a);

private:
	int flay_speed;
public:
	void fly(int time);
	
	void ShowDistanceCovered();
};

