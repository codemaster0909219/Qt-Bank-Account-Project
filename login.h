#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QString>
#include <QLabel>
#include <QInputDialog>
#include <QLineEdit>
#include <QDir>
#include <QPushButton>

class Login : public QWidget
{
    Q_OBJECT
private:
    QString userName;
    QString password;
public:
    explicit Login(QWidget *parent = nullptr);
    void setUserName(QString userName);
    QString getUserName();
    void setPassword(QString password);
    QString getPassword();
    bool checkUserNameAndPassword(QString userName, QString password);

public slots:
       //void getInfoSlot();
};

#endif // LOGIN_H
