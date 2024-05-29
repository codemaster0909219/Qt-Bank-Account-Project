#include "Savingsaccount.h"

SavingsAccount::SavingsAccount()
{
    savingsBalance = 0;
    amount = 0;
}

void SavingsAccount::setDeposit(double amount)
{
    this->amount = amount;
    savingsBalance = savingsBalance + amount;
}

double SavingsAccount::getDeposit()
{
    return amount;
}

void SavingsAccount::setWithdraw(double amount)
{
    this->amount = amount;
    savingsBalance = savingsBalance - amount;
}

double SavingsAccount::getWithdraw()
{
    return amount;
}

double SavingsAccount::getSavingsBalance()
{
    return savingsBalance;
}
void SavingsAccount::saveTransaction(QVector<double>& savingsTransaction, double amount)
{
    this->amount = amount;
    savingsTransaction.push_front(amount);
}

SavingsAccount::~SavingsAccount()
{

}
