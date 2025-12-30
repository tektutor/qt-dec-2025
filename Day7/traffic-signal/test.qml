import QtQuick 2.7
import QtQuick.Controls 2.0

ApplicationWindow {
	width: 1000
	height: 1000
	visible: true
	color: "green"

	Light {
		id: redLight
		lightColor: "red"
		lightState: "off"
	}
}
