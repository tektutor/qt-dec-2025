import QtQuick 2.7

Rectangle {
	id: button

	property string caption: "Button"
	property string buttonColor: "darkgray"

	width: 100
	height: 50

	border.width: 2
	border.color: "blue"
	radius: 25 
	color: buttonColor 

	scale: mouseArea.containsMouse ? 1.1 : 1.0

	Text {
		anchors.centerIn: parent
		text: caption
		font.bold: true
		font.pointSize: 12
		color: "white"
	}

	MouseArea {
		id: mouseArea
		anchors.fill: parent
		hoverEnabled: true 
		onClicked: {
			console.log(caption + " clicked")
		}
		onEntered: {
			console.log("Entered mouse area")

		}
		onExited: {
			console.log("Exited mouse area")
		}
	}
}
