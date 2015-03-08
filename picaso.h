#ifndef PICASO_H
#define PICASO_H

#include <QObject>
#include <QString>
#include <QStringList>
#include <QtQuick/QQuickPaintedItem>
#include <QColor>

class Picaso : public QQuickPaintedItem
{
  Q_OBJECT
public:
  Picaso(QQuickItem *parent = 0);
  ~Picaso();
  void paint(QPainter *painter);
};

#endif // PICASO_H
