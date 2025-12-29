import QtQuick 2.7
import QtQuick.Controls 2.0

ApplicationWindow {

	width: 1000
	height: 1000
	visible: true

	Row {
		anchors.centerIn: parent
		spacing: 10

		CustomButton {
			caption: "Button 1"
			buttonColor: "blue"
		}
		CustomButton {
			caption: "Button 2"
			buttonColor: "green"
		}
	}

}
