#include "login.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    LoginWindow login;
    login.show();

    return app.exec();
}
