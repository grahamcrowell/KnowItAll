#ifndef PLUMBING_H
#define PLUMBING_H

#include <QObject>
#include <QString>
#include <QStringList>
#include <QtQuick/QQuickPaintedItem>
#include <QColor>
#include <QProcess>

// Simple QML component to that allows QML <-> C++ integration.
class Plumbing : public QQuickPaintedItem
{
    Q_OBJECT
    Q_PROPERTY(QString query READ getQuery WRITE setQuery NOTIFY queryChanged)

public:
    QProcess *proc;
    Plumbing(QQuickItem *parent = 0);
    ~Plumbing();

    QString getQuery();
    void setQuery(const QString &f);

    void paint(QPainter *painter);



public slots:
    void handleQueryChange();
    void searchIt();
    void searchSQL();
    void searchPython();
    void handleProcess();

//http://doc.qt.io/qt-5/qtqml-cppintegration-exposecppattributes.html#exposing-signals
signals:
    void queryChanged();
    void searchCompleted(const QString& result);

private:
    QString _query;
};

#endif // PLUMBING_H
