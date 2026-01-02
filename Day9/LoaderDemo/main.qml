import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {

	width: 1000
	height: 1000
	visible: true

	title: "Dynamically loading qml"

	Loader {
		id: dynamicQMLLoader
	}

	MouseArea {
		anchors.fill: parent

		onClicked: {
			console.log("Mouse clicked")
			dynamicQMLLoader.source = "MyRectangle.qml"
		}
	}
}
