import QtQuick 2.15
import QtQuick.Controls 2.15
import TekTutor 1.3

ApplicationWindow {
	id: topWindow
	width: 1000
	height: 1000
	visible: true

	signal addButtonClicked(double operand1,double operand2)
	signal subtractButtonClicked(double operand1,double operand2)
	signal multiplyButtonClicked(double operand1,double operand2)
	signal divideButtonClicked(double operand1,double operand2)

	TekTutorMathClass {
		id: mathClass
	}

	Connection {
		target: topWindow 
		function addButtonClicked( onAddButtonClicked(operand1,opearnd2)	
	}

	Column {
		anchors.centerIn: parent
		spacing: 10
	Grid {
		spacing: 5
		rows: 3
		columns: 2 
		Rectangle {
			width: 100
			height: 50
			Label { text: "First number: "; anchors.centerIn: parent; horizontalAlignment: Text.AlignRight}
		}
		Rectangle {
			width: 300
			height: 50
			border.width: 2
			TextInput { id: firstNumber; text: "0.0"; anchors.centerIn: parent }
		}
		Rectangle {
			width: 100
			height: 50
			Label { text: "Second number: "; anchors.centerIn: parent; horizontalAlignment: Text.AlignRight }
		}
		Rectangle {
			width: 300
			height: 50
			border.width: 2
			TextInput { id: secondNumber; text: "0.0"; anchors.centerIn: parent; horizontalAlignment: Text.AlignRight }
		}
		Rectangle {
			width: 100
			height: 50
			Label { text: "Result: "; anchors.centerIn: parent }
		}
		Rectangle {
			width: 300
			height: 50
			border.width: 2
			TextInput { id: result; text: "0.0"; anchors.centerIn: parent }
		}
	}
		Row {
			spacing: 5
			Button {
				text: "Add"
				onClicked: {
					addButtonClicked( parseFloat(firstNumber.text), parseFloat(secondNumber.text) )	
				}
			}
			Button {
				text: "Subtract"
				onClicked:
					subtractButtonClicked(
						parseFloat(firstNumber.text),
						parseFloat(secondNumber.text)
					)
			}
			Button {
				text: "Multiply"
				onClicked:
					multiplyButtonClicked(
						parseFloat(firstNumber.text),
						parseFloat(secondNumber.text)
					)	
			}
			Button {
				text: "Divide"
				onClicked:
					divideButtonClicked(
						parseFloat(firstNumber.text),
						parseFloat(secondNumber.text)
					)
			}
		}
	}

}
