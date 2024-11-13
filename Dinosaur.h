#pragma once
class Dinosaur
{

public:
    Dinosaur(string s,int n);
    void walk(int t);
    void showDistanceCovered();
    string getName();
protected:
    void addToDistance(int add);
    string name;
    int walking_speed;
    int distance_covered;
};

