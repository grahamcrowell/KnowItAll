import QtQuick 2.2
import QtQuick.Controls 1.1
//import plumbing 0.1
import picaso 0.1
//import Qt.labs.folderlistmodel 2.1
//import QtAudioEngine 1.0

ApplicationWindow {
    id: applicationWindow1
    visible: true
    width: 600
    height: 600
    title: "KnowItAll"

    menuBar: MenuBar {
        Menu {
            title: qsTr("File")
            MenuItem {
                text: qsTr("Exit")
                onTriggered: Qt.quit();
            }
        }
    }

//    NiceSuit {
//        id: niceSuit1
//        anchors.fill: parent
//    }
    Canvas {
        id: canvas1
        anchors.fill: parent
    }
}
