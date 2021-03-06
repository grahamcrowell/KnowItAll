import QtQuick 2.2
import QtQuick.Controls 1.1
import plumbing 0.1

Item {
    id: queryitem
    width: 400
    height: 100
    anchors.fill: parent
    TextField {
        id: userinput
        focus: true
        font.pointSize: 24
        font.family: "Courier"
        placeholderText: "ask allah"
        text: ""
        anchors.right: parent.right
        anchors.rightMargin: 0
        anchors.left: parent.left
        anchors.leftMargin: 0
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 50
        anchors.top: parent.top
        anchors.topMargin: 0
        onTextChanged: {
            luigi.handleQueryChange();
        }
    }

    Rectangle {
        id: rect
        color: "blue"
        anchors.top: userinput.bottom
        anchors.topMargin: 0
        anchors.left: parent.left
        anchors.leftMargin: 0
        anchors.right: parent.right
        anchors.rightMargin: 0
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 0

        Label {
            id: rectlabel
            x: 19
            y: 4
            color: "#ffffff"
            text: "QML"
            font.pointSize: 36
        }
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
        visible: false
        query: userinput.text
//        http://doc.qt.io/qt-5/qtqml-cppintegration-exposecppattributes.html#exposing-signals
        onSearchCompleted: {
            console.log("New results received:", result);
            userinput.text = result;
            rectlabel.text = result;
        }
    }
    Keys.onPressed: {
        if (event.key === Qt.Key_Escape) {
            Qt.quit();
        }

        else if ((event.key === Qt.Key_Return) && (event.modifiers & Qt.ShiftModifier)) {
            rect.state = "GreenState";
            luigi.searchSQL();
        }
        else if ((event.key === Qt.Key_Return) && (event.modifiers & Qt.ControlModifier)) {
            rect.state = "RedState";
            luigi.searchPython();

        }
        else if (event.key === Qt.Key_Return) {
            if (userinput.text == "") {
                userinput.placeholderText = "fuck you then";
                luigi.visible = true;
            }
            else {
                rect.state = "";
                luigi.visible = false;
                luigi.searchIt();

            }
        }
    }
}

