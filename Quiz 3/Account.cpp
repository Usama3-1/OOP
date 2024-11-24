#include "Account.h"
#include <iostream>
#include <string>
using namespace std;

void Account::setAccountOwner(const PersonalInfo& owner) {
    account_owner = owner;
}

void Account::setAccountNumber(const string& accountNumber) {
    account_number = accountNumber;
}

void Account::setAmount(double Namount) {
    amount = Namount;
}

double Account::getAmount() const {
    return amount;
}

void Account::print(ofstream& outputFile) const {
    account_owner.print(outputFile);
}
