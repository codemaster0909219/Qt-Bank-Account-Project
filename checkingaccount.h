#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H
#include "account.h"


class CheckingAccount : public Account
{
private:
    double checkingBalance;
    double amount;
    double overDraftFee;
    QVector<double> checkingsTransaction;
public:
    CheckingAccount();
    void setDeposit(double amount);
    double getDeposit();
    void setWithdraw(double amount);
    double getWithdraw();
    double getCheckingBalance();
    void saveTransaction(QVector<double>& checkingsTransaction, double amount);
    ~CheckingAccount();
};

#endif // CHECKINGACCOUNT_H
