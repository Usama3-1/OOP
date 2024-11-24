#include "Bank.h"
#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
using namespace std;

Bank::Bank() : num_of_accounts(0) {}

void Bank::getAccountsInfoFromFile(const string& filename) {
    ifstream inputFile(filename);
    string fname, lname, accNumber;
    double amount;
    float profitRate;

    while (inputFile >> fname >> lname >> accNumber >> amount >> profitRate) {
        accounts[num_of_accounts].setInfo(fname, lname, accNumber, amount, profitRate);
        num_of_accounts++;
    }
}

void Bank::applyYearEndProfit() {
    for (int i = 0; i < num_of_accounts; ++i) {
        accounts[i].applyProfit();  
    }
}

void Bank::printAccounts(ofstream& outputFile) const {
    for (int i = 0; i < num_of_accounts; ++i) {
        accounts[i].print(outputFile); 
    }
}

int Bank::getNumOfAccounts() const {
    return num_of_accounts;
}
