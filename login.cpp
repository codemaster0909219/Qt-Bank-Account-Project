#include "login.h"

Login::Login(QWidget *parent) : QWidget(parent)
{

}

void Login::setUserName(QString userName)
{
    this->userName = userName;
}

QString Login::getUserName()
{
    return userName;
}

void Login::setPassword(QString password)
{
    this->password = password;
}

QString Login::getPassword()
{
    return password;
}

bool Login::checkUserNameAndPassword(QString userName, QString password)
{
    if (userName == "Heck" && password == "Yeah")
    {
        return true;
    }
    else
    {
        QWidget * errorWindow = new QWidget;
        errorWindow->setFixedSize(300,250);

        QLabel * errorMessage = new QLabel(errorWindow);
        errorMessage->setFrameStyle(QFrame::Panel | QFrame::Sunken);
        errorMessage->setText("Incorrect User Name or Password\n\nUsername = Heck\nPassword = Yeah");
        errorMessage->setGeometry(50,80,210,60);

        QPushButton * okButton = new QPushButton("OK", errorWindow);
        okButton->setGeometry(110,180,60,30);
        connect(okButton, SIGNAL (pressed()), errorWindow, SLOT (close()));
        errorWindow->show();
        return false;
    }
}

