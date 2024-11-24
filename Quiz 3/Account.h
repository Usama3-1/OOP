#include <iostream>
#include <string>
using namespace std;

#include "PersonalInfo.h"
#include <string>

class Account {
public:
    void setAccountOwner(const PersonalInfo& owner);
    void setAccountNumber(const string& accNumber);
    void setAmount(double amt);
    double getAmount() const;
    void print(ofstream& outputFile) const;

protected:
    string account_number;
    PersonalInfo account_owner;
    double amount;
};

