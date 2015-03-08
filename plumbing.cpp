#include <QProcess>
#include <QDebug>
#include <QColor>
#include <QPainter>

#include "plumbing.h"

Plumbing::Plumbing(QQuickItem *parent)
  : QQuickPaintedItem(parent)
{
}

Plumbing::~Plumbing()
{
}

QString Plumbing::getQuery()
{
  return _query;
}

void Plumbing::setQuery(const QString &f)
{
  if (f != _query) {
      _query = f;
      qDebug() << "setQuery called " << _query;
      emit queryChanged();
    }
}

void Plumbing::paint(QPainter *painter)
{
  qDebug() << "leave me alone while i paint " << _query;
  QColor colour = QColor("green");
  QPen pen(colour,2);
  painter->setPen(pen);
  painter->setRenderHints(QPainter::Antialiasing, true);
  painter->drawPie(boundingRect().adjusted(1, 1, -1, -1), 90 * 16, 290 * 16);
  qDebug() << "OK what you want? " << _query;
}

void Plumbing::handleQueryChange()
{
  qDebug() << "handleQueryChange called, hello from c++";
  QString message("query: %1");
  qDebug() << message.arg(_query);


  //    QString prog = "bash";
  //    QStringList args;
  //    args << "-t"<< _type << "-N" << _passphrase << "-f" << _filename;
  //    proc->start(prog);
  //    proc->waitForFinished();
  //    emit keyGenerated(proc->exitCode() == 0);
  //    delete proc;
}
void Plumbing::handleProcess()
{
  qDebug() << "handling process";
//  proc = new QProcess();
//  proc->start("ls");
  QString s("output:");
//  QString out();
//  proc->readAllStandardOutput();
//  s.arg(out);
  qDebug() << s;
  qDebug() << proc->readAllStandardOutput();
}

void Plumbing::searchIt() {
  qDebug() << "i know all about " << _query;
  const QString message("fuck u from c++");
  emit searchCompleted(message);
}

void Plumbing::searchSQL() {
  qDebug() << "i know all about SQL and start process " << _query;
  proc = new QProcess;
  connect(proc,SIGNAL(readyRead()),this, SLOT(handleProcess()));
  proc->start("pwd");
//  proc->start("./main");
  qDebug() << proc->workingDirectory();
//  proc->waitForFinished();
}

void Plumbing::searchPython() {
  qDebug() << "i know all about Python and " << _query;
}
