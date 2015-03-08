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
//    Q_PROPERTY(QString type READ type WRITE setType NOTIFY typeChanged)
//    Q_PROPERTY(QStringList types READ types NOTIFY typesChanged)
    Q_PROPERTY(QString query READ getQuery WRITE setQuery NOTIFY queryChanged)
//    Q_PROPERTY(QString passphrase READ getQuery WRITE setPassphrase NOTIFY passphraseChanged)

public:
    Plumbing(QQuickItem *parent = 0);
    ~Plumbing();

//    QString type();
//    void setType(const QString &t);

//    QStringList types();

    QString getQuery();
    void setQuery(const QString &f);

//    QString passphrase();
//    void setPassphrase(const QString &p);

    void paint(QPainter *painter);

public slots:
    void handleQueryChange();
    void searchIt();
    void searchSQL();
    void searchPython();

//http://doc.qt.io/qt-5/qtqml-cppintegration-exposecppattributes.html#exposing-signals
signals:
//    void typeChanged();
//    void typesChanged();
    void queryChanged();
//    void passphraseChanged();
    void searchCompleted(const QString& result);

private:
//    QString _type;
    QString _query;
//    QString _passphrase;
//    QStringList _types;
};

#endif // PLUMBING_H
