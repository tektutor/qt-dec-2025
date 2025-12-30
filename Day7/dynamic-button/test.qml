import QtQuick 2.7
import QtQuick.Controls 2.0

ApplicationWindow {
	width: 500
	height: 500
	visible: true

	Row{
		anchors.centerIn: parent
		spacing: 1
		Repeater {
			model: 8
			Image {
				source: "brick.jpg"
			}
		}
	}

}
