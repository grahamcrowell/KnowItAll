#ifndef PLUMBING_H
#define PLUMBING_H

#include <QObject>
#include <QString>
#include <QStringList>
#include <QtQuick/QQuickPaintedItem>
#include <QColor>

// Simple QML object to generate SSH key pairs by calling ssh-keygen.

class Plumbing : public QQuickPaintedItem
{
    Q_OBJECT
    Q_PROPERTY(QString type READ type WRITE setType NOTIFY typeChanged)
    Q_PROPERTY(QStringList types READ types NOTIFY typesChanged)
    Q_PROPERTY(QString filename READ filename WRITE setFilename NOTIFY filenameChanged)
    Q_PROPERTY(QString passphrase READ filename WRITE setPassphrase NOTIFY passphraseChanged)

public:
    Plumbing(QQuickItem *parent = 0);
    ~Plumbing();

    QString type();
    void setType(const QString &t);

    QStringList types();

    QString filename();
    void setFilename(const QString &f);

    QString passphrase();
    void setPassphrase(const QString &p);

    void paint(QPainter *painter);

public slots:
    void generateKey();
    void searchIt();
    void searchSQL();
    void searchPython();

signals:
    void typeChanged();
    void typesChanged();
    void filenameChanged();
    void passphraseChanged();
    void keyGenerated(bool success);

private:
    QString _type;
    QString _filename;
    QString _passphrase;
    QStringList _types;
};

#endif // PLUMBING_H
