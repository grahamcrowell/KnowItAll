#include <QFile>
#include <QProcess>
#include <QDebug>
#include <QColor>
#include <QPainter>

#include "plumbing.h"

Plumbing::Plumbing(QQuickItem *parent)
    : QQuickPaintedItem(parent)
//    , _type("rsa")
{
//  _types << "dsa" <<  "ecdsa" <<  "rsa" << "rsa1";
}

Plumbing::~Plumbing()
{
}

//QString Plumbing::type()
//{
//    return _type;
//}

//void Plumbing::setType(const QString &t)
//{
//    // Check for valid type.
//    if (!_types.contains(t))
//        return;

//    if (t != _type) {
//        _type = t;
//        emit typeChanged();
//    }
//}

//QStringList Plumbing::types()
//{
//    return _types;
//}

QString Plumbing::getText()
{
    return _text;
}

void Plumbing::setText(const QString &f)
{
    if (f != _text) {
        _text = f;
        qDebug() << "setFilename called " << _text;
        emit textChanged();
    }
}

//QString Plumbing::passphrase()
//{
//    return _passphrase;
//}

//void Plumbing::setPassphrase(const QString &p)
//{
//    if (p != _passphrase) {
//        _passphrase = p;
//        emit passphraseChanged();
//    }
//}
void Plumbing::paint(QPainter *painter)
{
  qDebug() << "leave me alone while i paint " << _text;
    QColor colour = QColor("green");
    QPen pen(colour,2);
    painter->setPen(pen);
    painter->setRenderHints(QPainter::Antialiasing, true);
    painter->drawPie(boundingRect().adjusted(1, 1, -1, -1), 90 * 16, 290 * 16);
    painter->drawEllipse(10,10,60,90);
    qDebug() << "OK what you want? " << _text;
}
void Plumbing::generateKey()
{
  qDebug() << "generateKey called, hello from c++";
  QString message("filename %1");
  qDebug() << message.arg(_text);

//    // Sanity check on arguments
//    if (_type.isEmpty() or _filename.isEmpty() or
//        (_passphrase.length() > 0 and _passphrase.length() < 5)) {
//        emit keyGenerated(false);
//        return;
//    }

//    // Remove key file if it already exists
//    if (QFile::exists(_filename)) {
//        QFile::remove(_filename);
//    }
//    QProcess *process = new QProcess;
//    QString open("open");
//    QStringList chrome_args;
//    chrome_args << "-a" << "/Applications/Google\\ Chrome.app";
////                   chrome_argsopen -a /Applications/Google\ Chrome.app http://www.nhl.com
//    process->start(open, QStringList() <<"-a" << "/Applications/Google\\ Chrome.app");
//    process->start("python");
////    , QStringList() <<"-a" << "/Applications/Google\\ Chrome.app");
//    process->waitForFinished();
//    qDebug() << "chrome should be open";
//    // Execute ssh-keygen -t type -N passphrase -f keyfileq
//    QProcess *proc = new QProcess;
//    QString prog = "ssh-keygen";
//    QStringList args;
//    args << "-t"<< _type << "-N" << _passphrase << "-f" << _filename;
//    proc->start(prog, args);
//    proc->waitForFinished();
//    emit keyGenerated(proc->exitCode() == 0);

//    delete proc;
}

void Plumbing::searchIt() {
  qDebug() << "i know all about " << _text;
//  emit seachedIt
}

void Plumbing::searchSQL() {
  qDebug() << "i know all about SQL and " << _text;
}

void Plumbing::searchPython() {
  qDebug() << "i know all about Python and " << _text;
}
