#include <QApplication>
#include <QObject>
#include <QQmlComponent>
#include <QQmlEngine>
#include <QQuickWindow>
#include <QSurfaceFormat>
#include "plumbing.h"

// Main wrapper program.
// Special handling is needed when using Qt Quick Controls for the top window.
// The code here is based on what qmlscene does.

int main(int argc, char ** argv)
{
    QApplication app(argc, argv);

    // Register our component type with QML.
    qmlRegisterType<Plumbing>("plumbing", 0, 1, "Plumbing");

    int rc = 0;

    QQmlEngine engine;
    QQmlComponent *component = new QQmlComponent(&engine);

    QObject::connect(&engine, SIGNAL(quit()), QCoreApplication::instance(), SLOT(quit()));
    QUrl qmlSource("qrc:/main.qml");
    component->loadUrl(qmlSource);

    if (!component->isReady() ) {
        qWarning("!!! %s", qPrintable(component->errorString()));
        return -1;
    }

    QObject *topLevel = component->create();
    QQuickWindow *window = qobject_cast<QQuickWindow *>(topLevel);

    QSurfaceFormat surfaceFormat = window->requestedFormat();
    window->setFormat(surfaceFormat);
    window->show();

    rc = app.exec();

    delete component;
    return rc;
}
