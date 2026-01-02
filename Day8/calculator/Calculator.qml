import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.3

ApplicationWindow {
	id: calculator

	width: 480
	height:300 
	visible: true

	function handleOperands(value) {
		console.log("Key pressed: ", value )
		display.text += value
	}
	ColumnLayout {
		anchors.centerIn: parent
		spacing: 5
		Rectangle {
			width: 410
			height: 60
			radius: 20
			border.width: 2
			anchors.leftMargin: 10
			anchors.rightMargin: 10

			Text{
				id: display
				anchors.centerIn: parent
				width: 400
				text: "0.0"
				horizontalAlignment: Text.AlignRight
			}
		}	

		GridLayout {
			rows: 4
			columns: 4
			columnSpacing: 5
			rowSpacing: 5

			CustomButton{ 
				text: "C" 
				Layout.row: 0
				Layout.column: 0
			}

			CustomButton{ 
				Layout.row: 1
				Layout.column: 0
				text: "7" 
			}

			CustomButton{ text: "8" }
			CustomButton{ text: "9" }
			CustomButton{ 
				text: "4" 
				Layout.row: 2
			}
			CustomButton{ text: "5" }
			CustomButton{ text: "6" }

			CustomButton{ 
				text: "1" 
				Layout.row: 3	
			}
			CustomButton{ text: "2" }
			CustomButton{ text: "3" }
			CustomButton{ 
				text: "." 
				Layout.row: 4
			}
			CustomButton{ text: "Ans" }

			CustomButton{ 
				text: "/" 
				Layout.row: 0
				Layout.column: 3
			}

			CustomButton{ 
				text: "*" 
				Layout.row: 1
				Layout.column: 3
			}
			CustomButton{ 
				text: "-" 
				Layout.row: 2
				Layout.column: 3
			}
			CustomButton{ 
				text: "+" 
				Layout.row: 3
				Layout.column: 3
			}
	   }

	}
}
