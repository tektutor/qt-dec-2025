import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
	width: 1000
	height: 1000
	visible: true

	ComboBox {
		model : [ "Mango", "Apple", "Grapes" ] 

		onCurrentTextChanged: {
			console.log("Selected: ", currentText )
		}
	}
}

