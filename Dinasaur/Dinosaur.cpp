#include "Dinosaur.h"
using namespace std;
#include <iostream>


Dinosaur::Dinosaur(string n,int s)
{
	name = n;
	walking_speed = s;
	
}

void Dinosaur::walk(int t)
{
	distance_covered = t * walking_speed;
}


void Dinosaur::showDistanceCovered()
{
	cout << distance_covered;
}


string Dinosaur::getName()
{
	
	return name;
}


void Dinosaur::addToDistance(int add)
{
	
	distance_covered = distance_covered + add;
}
