import QtQuick 2.2
import QtQuick.Controls 1.1
import plumbing 0.1

Item {
    id: queryitem
    width: parent.width
    height: parent.width
    anchors.fill: parent


    Rectangle {
        id: rect
        color: "white"
        anchors.fill: parent
        states: [
            State {
                name: "GreenState"
                PropertyChanges {
                    target: rect
                    color: "green"
                }
            },
            State {
                name: "RedState"
                PropertyChanges {
                    target: rect
                    color: "red"
                }
            }
        ]
    }

    Plumbing {
        id: luigi
        width: 100;
        height: 100
        anchors.centerIn: parent
//        filename: userinput.text
    }
    Keys.onPressed: {
        if (event.key === Qt.Key_Escape) {
            Qt.quit();
        }

        else if ((event.key === Qt.Key_Return) && (event.modifiers & Qt.ShiftModifier)) {
            rect.state = "GreenState";
//            luigi.searchSQL();
        }
        else if ((event.key === Qt.Key_Return) && (event.modifiers & Qt.ControlModifier)) {
            rect.state = "RedState";
//            luigi.searchPython();

        }
//        else if (event.key === Qt.Key_Return) {
//            //            if (userinput.text == "") {
//            ////                userinput.placeholderText = "fuck you then";
//            //            }
//            //            else {
//            //                rect.state = "";
//            //            }
////            rect.color ="pink";
//        }
    }
}


