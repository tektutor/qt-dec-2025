import QtQuick 2.7
import QtQuick.Controls 2.0

ApplicationWindow {

	width: 1000
	height: 1000
	visible: true

	Grid {
		anchors.centerIn: parent
		spacing: 10
		rows: 4
		columns: 3

		CustomButton {
			caption: "Button 1"
		}
		CustomButton {
			caption: "Button 2"
		}
		CustomButton {
			caption: "Button 3"
		}
		CustomButton {
			caption: "Button 4"
		}
		CustomButton {
			caption: "Button 5"
		}
		CustomButton {
			caption: "Button 6"
		}
		CustomButton {
			caption: "Button 7"
		}
		CustomButton {
			caption: "Button 8"
		}
		CustomButton {
			caption: "Button 9"
		}
		CustomButton {
			caption: "Button 10"
		}
	}

}
