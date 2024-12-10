// OOpFinal.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
using namespace std;




class Koi {
protected:
    int healthPoints;
    static int id;

public:
    Koi() { 

        id++
            ; }

    Koi(int initialHealth = 10) : healthPoints(initialHealth) {}

    
    virtual void displayHealth() = 0;

    
    void feed() {       
        healthPoints++;
    }

   
    void viralAttack() {    
        healthPoints -= 2;
    }

 
    int getHealth() const {
        return healthPoints;
    }

    
    bool isDead() const {
        return healthPoints <= 0;
    }
};


class KoiBiColor : public Koi {
private:
    char Char_A;
    char Char_B;

public:
    

    KoiBiColor(int initialHealth = 10) : Koi(initialHealth), Char_A('*'), Char_B('^') 
    {
       
    }

    
    void displayHealth() override {
        if (healthPoints > 6) {
            cout<<"Bicolor koi id "<<":" << Char_A << Char_B << Char_A << Char_B << Char_A << Char_B << Char_A << Char_B << endl;
        }
        else if (healthPoints > 0) {
            for (int i = 0; i < healthPoints; i++) {
                cout << Char_A << Char_B;
            }
            cout << endl;
        }
        else {
            cout << "XX" << endl;
        }
    }
};


class KoiTriColor : public Koi {
private:
    char Char1;
    char Char2;
    char Char3;

public:
    
    KoiTriColor(int initialHealth = 8) : Koi(initialHealth), Char1('~'), Char2('!'), Char3('#') 
    {
        
    }

    
    void displayHealth() override {
        if (healthPoints > 6) {
            
               cout << "Tricolor koi id " << ":"<< Char1 << Char2 << Char3 << Char1 << Char2 << Char3 << endl;
        }
        else if (healthPoints > 0) {
            for (int i = 0; i < healthPoints; i++) {
                cout << Char1 << Char2;
            }
            cout << endl;
        }
        else {
            cout << "XX" << endl; 
        }
    }
};

int Koi::id = 1;

int main() {
    srand(time(0));
    vector<Koi*> pond;
    char choice;
    int randomNum = rand() % 101;
    cout << "Random number is =" << " " << randomNum << endl;

   
    do {
        cout << "Enter B to add a bicolor koi, T to add a tricolor koi, or E to stop: ";
        cin >> choice;
        if (choice == 'B') {
            pond.push_back(new KoiBiColor());
        }
        else if (choice == 'T') {
            pond.push_back(new KoiTriColor());
        }
    } while (choice != 'E');

    
    cout << "\nDisplaying pond in initial state ...\n";
    for (Koi* koi : pond) {
        koi->displayHealth();
    }

   
    char feedChoice;
    do {
        cout << "Would you like to feed your koi? (y/n) ";
        cin >> feedChoice;
        if (feedChoice == 'y') {
            for (Koi* koi : pond) {
                koi->feed();
            }
        }
    } while (feedChoice != 'n');

   
    cout << "\nDisplaying pond after feeding ...\n";
    for (Koi* koi : pond) {
        koi->displayHealth();
    }

    
    for (Koi* koi : pond) {
        if (rand() % 2) { 
            koi->viralAttack();
        }
    }

   
    cout << "\nDisplaying pond after viral attack ...\n";
    for (Koi* koi : pond) {
        koi->displayHealth();
    }

   
    for (Koi* koi : pond) {
        delete koi;
    }

    return 0;
}



