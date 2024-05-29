#include "user.h"

User::User()
{
    checkingAccountNumber = 12345;
    savingsAccountNumber = 54321;
}

unsigned int User::getCheckingAccountNumber()
{
    return checkingAccountNumber;
}

unsigned int User::getSavingsAccountNumber()
{
    return savingsAccountNumber;
}

User::~User()
{

}
