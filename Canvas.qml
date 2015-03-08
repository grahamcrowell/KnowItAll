import QtQuick 2.2
import picaso 0.1

Item {
    id: picasoitem
    width: parent.width
    height: parent.height
    anchors.fill: parent
    Picaso {
        width: 200
        height: 200
        anchors.centerIn: parent
//        anchors.fill: parent
    }
}
