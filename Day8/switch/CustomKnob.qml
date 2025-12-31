import QtQuick 2.15

Rectangle {
	width: 150
	height: 50
	radius: 20

	border.width: 2

	color: "steelblue"

	Led {
		id: led
		lightColor: "red"
		anchors.centerIn: parent	
	}

	states: [
		State {
			name: "on"
			PropertyChanges {
				target: led
				state: "on"
			}
		},
		State {
			name: "off"
			PropertyChanges {
				target: led
				state: "off"
			}
		}
	]
}


