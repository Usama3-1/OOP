#include "FlayingDinosaur.h"
#include "SwimmingDinosaur.h"
#include "Dinosaur.h"


FlayingDinosaur::FlayingDinosaur(string n, int s, int a)
{
	name = n;
	walking_speed = s;
	flay_speed = a;
}


void FlayingDinosaur::flay(int time)
{
	distance_covered = time * flay_speed;
}


void FlayingDinosaur::ShowDistanceCovered()
{
	cout << distance_covered;
}