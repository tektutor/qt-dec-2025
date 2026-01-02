import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.3

ApplicationWindow {
	id: calculator

	width:  480 
	height: 500 
	visible: true

	function handleOperands(value) {
		console.log("Key pressed: ", value )
		if ( display.text === "0.0" ) display.text = ""
		display.text += value
	}
	ColumnLayout {
		anchors.centerIn: parent

		Layout.fillWidth: true
		Layout.fillHeight: true

		Rectangle {
			width: 410; height: 60
			radius: 20

			border.color: "red"
			border.width: 2
			color: "lightgreen"

			Text{
				id: display

				anchors.centerIn: parent
				width: 400 
				text: "0.0"
				horizontalAlignment: Text.AlignRight

				font.family: "Seven Segment"
				font.bold: true
				font.pointSize: 25
			}
		} //rect 	

		GridLayout {
			rows: 4
			columns: 4
			columnSpacing: 5
			rowSpacing: 5

			Layout.fillWidth: true 
			Layout.fillHeight: true

			CustomButton{ 
				text: "C" 
				Layout.row: 0
				Layout.column: 0
				Layout.fillWidth: true
				Layout.fillHeight: true
				onClicked: {
					display.text = "0.0" 
				}
			}

			CustomButton{ 
				Layout.row: 1
				Layout.column: 0
				Layout.fillWidth: true
				Layout.fillHeight: true
				text: "7" 

				onClicked: {
					if ( display.text === "0.0" ) display.text = ""
					display.text += text
				}
			}

			CustomButton{ 
				text: "8" 
				Layout.fillWidth: true
				Layout.fillHeight: true
				onClicked: {
					if ( display.text === "0.0" ) display.text = ""
					display.text += text
				}
			}

			CustomButton{ 
				text: "9" 
				Layout.fillWidth: true
				Layout.fillHeight: true
				onClicked: {
					if ( display.text === "0.0" ) display.text = ""
					display.text += text
				}

			}

			CustomButton{ 
				text: "4" 
				Layout.row: 2
				Layout.fillWidth: true
				Layout.fillHeight: true
				onClicked: {
					if ( display.text === "0.0" ) display.text = ""
					display.text += text
				}
			}

			CustomButton{ 
				text: "5" 
				Layout.fillWidth: true
				Layout.fillHeight: true
				onClicked: {
					if ( display.text === "0.0" ) display.text = ""
					display.text += text
				}
			}

			CustomButton { 
				text: "6" 
				Layout.fillWidth: true
				Layout.fillHeight: true
				onClicked: {
					if ( display.text === "0.0" ) display.text = ""
					display.text += text
				}
			}

			CustomButton{ 
				text: "1" 
				Layout.row: 3	
				Layout.fillWidth: true
				Layout.fillHeight: true
				onClicked: {
					if ( display.text === "0.0" ) display.text = ""
					display.text += text
				}
			}

			CustomButton{ 
				text: "2" 
				Layout.fillWidth: true
				Layout.fillHeight: true
				onClicked: {
					if ( display.text === "0.0" ) display.text = ""
					display.text += text
				}
			}

			CustomButton{ 
				text: "3" 
				Layout.fillWidth: true
				Layout.fillHeight: true
				onClicked: {
					if ( display.text === "0.0" ) display.text = ""
					display.text += text
				}
			}

			CustomButton{ 
				text: "0" 
				Layout.row: 4
				Layout.fillWidth: true
				Layout.fillHeight: true
				onClicked: {
					if ( display.text === "0.0" ) display.text = ""
					display.text += text
				}
			}

			CustomButton{ 
				text: "." 
				Layout.fillWidth: true
				Layout.fillHeight: true
				onClicked: {
					if ( display.text === "0.0" ) display.text = ""
					display.text += text
				}
			}

			CustomButton{ 
				text: "Ans" 
				Layout.fillWidth: true
				Layout.fillHeight: true
				onClicked: {
					if ( display.text === "0.0" ) display.text = "0.0"
					try {
						display.text = eval(display.text).toString()
					}	
					catch(e) {
						display.text = "Invalid math expression"
					}
				}
			}

			CustomButton{ 
				text: "/" 
				Layout.row: 0
				Layout.column: 3
				Layout.fillWidth: true
				Layout.fillHeight: true
				onClicked: {
					if ( display.text === "0.0" ) display.text = ""
					display.text += text
				}
			}

			CustomButton{ 
				text: "*" 
				Layout.row: 1
				Layout.column: 3
				Layout.fillWidth: true
				Layout.fillHeight: true
				onClicked: {
					if ( display.text === "0.0" ) display.text = ""
					display.text += text
				}
			}

			CustomButton{ 
				text: "-" 
				Layout.row: 2
				Layout.column: 3
				Layout.fillWidth: true
				Layout.fillHeight: true
				onClicked: {
					if ( display.text === "0.0" ) display.text = ""
					display.text += text
				}
			}

			CustomButton{ 
				text: "+" 
				Layout.row: 3
				Layout.column: 3
				Layout.fillWidth: true
				Layout.fillHeight: true
				onClicked: {
					if ( display.text === "0.0" ) display.text = ""
					display.text += text
				}
			}
	        } //GridLayout
	} //ColumLayout
} // ApplicationWindow
