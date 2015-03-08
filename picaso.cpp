#include <QFile>
#include <QProcess>
#include <QDebug>
#include <QColor>
#include <QPainter>


#include "picaso.h"

Picaso::Picaso(QQuickItem *parent)
  : QQuickPaintedItem(parent)
{
}


void Picaso::paint(QPainter *painter)
{
  qDebug() << "leave me alone while i paint ";
    QColor colour = QColor("green");
    QPen pen(colour,2);
    painter->setPen(pen);
    painter->setRenderHints(QPainter::Antialiasing, true);
    painter->drawPie(boundingRect().adjusted(1, 1, -1, -1), 90 * 16, 290 * 16);

    qDebug() << "OK what you want? ";
}
