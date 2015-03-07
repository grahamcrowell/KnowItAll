#include <QFile>
#include <QProcess>
#include <QDebug>
#include "plumbing.h"

Plumbing::Plumbing()
    : _type("rsa")
{
  _types << "dsa" <<  "ecdsa" <<  "rsa" << "rsa1";
}

Plumbing::~Plumbing()
{
}

QString Plumbing::type()
{
    return _type;
}

void Plumbing::setType(const QString &t)
{
    // Check for valid type.
    if (!_types.contains(t))
        return;

    if (t != _type) {
        _type = t;
        emit typeChanged();
    }
}

QStringList Plumbing::types()
{
    return _types;
}

QString Plumbing::filename()
{
    return _filename;
}

void Plumbing::setFilename(const QString &f)
{
    if (f != _filename) {
        _filename = f;
        qDebug() << _filename;
        emit filenameChanged();
    }
}

QString Plumbing::passphrase()
{
    return _passphrase;
}

void Plumbing::setPassphrase(const QString &p)
{
    if (p != _passphrase) {
        _passphrase = p;
        emit passphraseChanged();
    }
}

void Plumbing::generateKey()
{
    // Sanity check on arguments
    if (_type.isEmpty() or _filename.isEmpty() or
        (_passphrase.length() > 0 and _passphrase.length() < 5)) {
        emit keyGenerated(false);
        return;
    }

    // Remove key file if it already exists
    if (QFile::exists(_filename)) {
        QFile::remove(_filename);
    }
    QProcess *process = new QProcess;
    QString open("open");
    QStringList chrome_args;
    chrome_args << "-a" << "/Applications/Google\\ Chrome.app";
//                   chrome_argsopen -a /Applications/Google\ Chrome.app http://www.nhl.com
    process->start(open, QStringList() <<"-a" << "/Applications/Google\\ Chrome.app");
    process->start("python");
//    , QStringList() <<"-a" << "/Applications/Google\\ Chrome.app");
    process->waitForFinished();
    qDebug() << "chrome should be open";
    // Execute ssh-keygen -t type -N passphrase -f keyfileq
    QProcess *proc = new QProcess;
    QString prog = "ssh-keygen";
    QStringList args;
    args << "-t"<< _type << "-N" << _passphrase << "-f" << _filename;
    proc->start(prog, args);
    proc->waitForFinished();
    emit keyGenerated(proc->exitCode() == 0);

    delete proc;
}
