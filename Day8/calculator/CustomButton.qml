import QtQuick 2.15
import QtQuick.Controls 2.15

Button {
	id: button
	property string buttonColor: "black"
	
	width: 80
	height: 50

	onClicked: {
		console.log("Button " + text + " clicked")	
		calculator.handleOperands(button.text)
	}

}
