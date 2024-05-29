#ifndef USER_H
#define USER_H
#include "checkingaccount.h"

class User
{
private:
    unsigned int checkingAccountNumber;
    unsigned int savingsAccountNumber;
public:
    User();
    unsigned int getCheckingAccountNumber();
    unsigned int getSavingsAccountNumber();
    ~User();
};

#endif // USER_H
