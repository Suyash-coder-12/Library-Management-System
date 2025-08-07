#ifndef UTILS_H
#define UTILS_H

#include <QString>

QString hashPassword(const QString &password);

#endif // UTILS_H

// ========================= utils.cpp =========================
#include "utils.h"
#include <QCryptographicHash>

QString hashPassword(const QString &password) {
    QByteArray hash = QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha256);
    return hash.toHex();
}
