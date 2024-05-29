#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
#include "account.h"


class SavingsAccount : public Account
{
private:
    double savingsBalance;
    double amount;
    double interestRate;
    QVector<double> savingsTransaction;
public:
    SavingsAccount();
    void setDeposit(double amount);
    double getDeposit();
    void setWithdraw(double amount);
    double getWithdraw();
    double getSavingsBalance();
    void saveTransaction(QVector<double>& savingsTransaction, double amount);
    ~SavingsAccount();
};

#endif // SAVINGSACCOUNT_H
