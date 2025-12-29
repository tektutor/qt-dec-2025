import QtQuick 2.7
import QtQuick.Controls 2.0

ApplicationWindow {

	width: 400
	height: 500
	visible: true

	Flow {
		anchors.fill: parent
		spacing: 10

		CustomButton {
			caption: "Button 1"
			buttonColor: "blue"
		}
		CustomButton {
			caption: "Button 2"
			buttonColor: "green"
		}
		CustomButton {
			caption: "Button 3"
			buttonColor: "blue"
		}
		CustomButton {
			caption: "Button 4"
			buttonColor: "blue"
		}
		CustomButton {
			caption: "Button 5"
			buttonColor: "blue"
		}
	}

}
