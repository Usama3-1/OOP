#include "SwimmingDinosaur.h"
#pragma once
#include "Dinosaur.h"
using namespace std;
#include <iostream>

SwimmingDinosaur::SwimmingDinosaur(string n,int s,int a)
{
	name = n;
	walking_speed = s;
	swimming_speed = a;
}


void SwimmingDinosaur::swim(int time)
{
	distance_covered = time * swimming_speed;
}


void SwimmingDinosaur::ShowDistanceCovered()
{
	cout << distance_covered;
}
