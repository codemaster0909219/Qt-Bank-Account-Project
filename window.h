#ifndef WINDOW_H
#define WINDOW_H

#include <QApplication>
#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QString>
#include <QVector>
#include <QInputDialog>
#include "user.h"
#include "checkingaccount.h"
#include "savingsaccount.h"
#include "login.h"

class QPushButton;
class Window : public QMainWindow
{
    Q_OBJECT
public:
    explicit Window(QWidget *parent = nullptr);

private:
    QVector<double> savingsTransaction;
    QVector<double> checkingsTransaction;

    // Objects
    User user;
    CheckingAccount checkings;
    SavingsAccount savings;
    Login login;

    // PushButton objects
    QPushButton * checkingsButton;
    QPushButton * depositButton;
    QPushButton * depositSavingsButton;
    QPushButton * depositCheckingsButton;
    QPushButton * historyButton;
    QPushButton * okButton;
    QPushButton * savingsButton;
    QPushButton * transferButton;
    QPushButton * transferCheckingsToSavings;
    QPushButton * transferSavingsToCheckings;
    QPushButton * withdrawButton;
    QPushButton * withdrawSavingsButton;
    QPushButton * withdrawCheckingsButton;

    // QLabel objects
    QLabel * checkingAccountNumberLabel;
    QLabel * checkingAccountNumberDisplay;
    QLabel * checkingBalanceLabel;
    QLabel * checkingBalanceDisplay;
    QLabel * depositMessageLabel;
    QLabel * depositAmountLabel;
    QLabel * savingsAccountLabel;
    QLabel * savingsAccountDisplay;
    QLabel * savingsBalanceDisplay;
    QLabel * savingsBalanceLabel;
    QLabel * transferLabel;
    QLabel * userNameDisplay;
    QLabel * userNameLabel;
    QLabel * withdrawMessageLabel;
    QLabel * historyLabel;
    QLabel * savingsHistoryLabel;
    QLabel * checkingsHistoryLabel;

private slots:
    void getInfoSlot();
    void mainAccountWindow();
    void savingsButtonWindow();
    void checkingsButtonWindow();
    void checkingsToSavingsTransfer();
    void savingsToCheckingsTransfer();
    void depositButtonWindow();
    void depositIntoSavings();
    void depositIntoCheckings();
    void withdrawButtonWindow();
    void withdrawFromCheckings();
    void withdrawFromSavings();
    void transferButtonWindow();
    void historyButtonWindow();


};

#endif // WINDOW_H
