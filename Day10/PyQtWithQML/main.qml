import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
	width: 500
	height: 500
	visible: true

	title: "PyQML with QML"

	Column {
		anchors.centerIn: parent
		spacing: 10

		Text {
			text: "Hello PyQt with QML"
			font.pointSize: 15
		}
	}
}
