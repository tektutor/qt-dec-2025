import QtQuick 2.15
import QtQuick.Controls 2.15

Button {
	id: button
	property string buttonColor: "steelblue"
	
	background: Rectangle {
		implicitWidth: 50
		implicitHeight: 50

		radius: 10
		color: button.down ? "blue" : buttonColor 
		border.color: "red"
	}

	contentItem: Text {
		anchors.centerIn: parent
		text: button.text
		font.pointSize: 15
		font.bold: true
	}


}
