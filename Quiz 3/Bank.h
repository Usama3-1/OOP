#include <iostream>
#include <string>
using namespace std;

#include "SavingAccount.h"
#include <string>
#include <fstream>

class Bank {
public:
    Bank();  
    void getAccountsInfoFromFile(const string& filename);
    void applyYearEndProfit();
    void printAccounts(ofstream& outputFile) const;
    int getNumOfAccounts() const;

private:
    int num_of_accounts;
    SavingAccount accounts[100];
};

