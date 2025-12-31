import QtQuick 2.0

Rectangle {
	id: light
	width: 20
	height: 20

	property string lightColor: "black"

	border.width: 2
	border.color: "black"

	//property binding
	color: lightColor

	states: [
		State {
			name: "on"
			PropertyChanges {
				target: light		
				color: lightColor
			}
		},
		State {
			name: "off"
			PropertyChanges {
				target: light		
				color:  "black"
			}
		}
	]

	transitions:  [
		Transition {
			PropertyAnimation {
				property: "color"
				duration: 100
			}
		}
	]
}
