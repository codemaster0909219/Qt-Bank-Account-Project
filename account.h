
#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <QVector>

class Account
{
protected:
    double amount;
    QVector<double> transaction;
public:

    Account();
    virtual void setDeposit(double amount) = 0;
    virtual double getDeposit() = 0;
    virtual void setWithdraw(double amount) = 0;
    virtual double getWithdraw() = 0;
    virtual void saveTransaction(QVector<double>& transactions, double amount) = 0;
    ~Account();

};

#endif // ACCOUNT_H

