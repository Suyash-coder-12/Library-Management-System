#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QString>

class QPushButton;
class QLineEdit;
class QLabel;

class LoginWindow : public QWidget {
    Q_OBJECT
public:
    LoginWindow(QWidget *parent = nullptr);

private slots:
    void handleLogin();

private:
    QLineEdit *usernameField;
    QLineEdit *passwordField;
    QLabel *statusLabel;
    QPushButton *loginButton;
    bool verifyCredentials(const QString &user, const QString &pass);
};

#endif // LOGIN_H
