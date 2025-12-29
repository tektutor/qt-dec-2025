import QtQuick 2.7
import QtQuick.Controls 2.0

ApplicationWindow{
	width: 500
	height: 500

	visible: true
	
	Column {
		anchors.centerIn: parent
		spacing: 5
		Row {
			spacing: 5
			Rectangle {
				color: "green"

				border.width: 5
				border.color: "black"
				radius: 50

				width: 100
				height: 100

				Text {
					anchors.centerIn: parent
					text: "Hello QML!"
					color: "white"
					font.bold: true
				}
			}
			Rectangle {
				color: "red"

				border.width: 5

				border.color: "black"

				width: 100
				height: 100
			}
		}
		Row {
			spacing: 5
			Rectangle {
				color: "green"

				border.width: 5
				border.color: "black"

				width: 100
				height: 100
			}
			Rectangle {
				color: "red"

				border.width: 5
				border.color: "black"

				width: 100
				height: 100
				radius: 50

				Text {
					anchors.centerIn: parent
					text: "Hello QML!"
					color: "white"
					font.bold: true
				}
			}
		}
	}
}
