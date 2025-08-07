#include "login.h"
#include <QVBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QMessageBox>
#include "utils.h"

LoginWindow::LoginWindow(QWidget *parent) : QWidget(parent) {
    QVBoxLayout *layout = new QVBoxLayout(this);

    usernameField = new QLineEdit(this);
    usernameField->setPlaceholderText("Username");

    passwordField = new QLineEdit(this);
    passwordField->setPlaceholderText("Password");
    passwordField->setEchoMode(QLineEdit::Password);

    loginButton = new QPushButton("Login", this);
    statusLabel = new QLabel("", this);

    connect(loginButton, &QPushButton::clicked, this, &LoginWindow::handleLogin);

    layout->addWidget(usernameField);
    layout->addWidget(passwordField);
    layout->addWidget(loginButton);
    layout->addWidget(statusLabel);
}

void LoginWindow::handleLogin() {
    QString user = usernameField->text();
    QString pass = passwordField->text();

    if (verifyCredentials(user, pass)) {
        statusLabel->setText("Login Successful");
        // TODO: Open Dashboard
    } else {
        statusLabel->setText("Invalid credentials");
    }
}

bool LoginWindow::verifyCredentials(const QString &user, const QString &pass) {
    QString hashed = hashPassword(pass);
    // TODO: Read users.dat file and compare
    return user == "admin" && hashed == hashPassword("admin123"); // demo
}
