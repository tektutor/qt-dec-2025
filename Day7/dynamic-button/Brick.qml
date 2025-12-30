import QtQuick 2.7

Rectangle {
	id: button

	property string caption: "Button"

	width: 100
	height: 50

	border.width: 2
	border.color: "blue"
	radius: 25 

	gradient: Gradient {
		GradientStop { start: 0.0; color: "black" }
		GradientStop { start: 0.5; color: "orange" }
		GradientStop { start: 1.0; color: "red" }
	}

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
