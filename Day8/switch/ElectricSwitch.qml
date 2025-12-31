import QtQuick 2.15

Rectangle {
	id: electricSwitch

	color: "steelblue"

	width: 100
	height: 300
	radius: 20

	border.width: 2

	CustomKnob {
		id: knob
		x: -25
		y: 50
		state: "on"

		MouseArea {
			anchors.fill: parent 

			onClicked: {
				if ( electricSwitch.state == "on" )
					electricSwitch.state = "off"
				else
					electricSwitch.state = "on"
			}
		}
	}

	states: [
		State {
			name: "on"
			PropertyChanges {
				target: knob
				state: "on"
			}
			PropertyChanges {
				target: knob
				y: 200
			}
		},
		State {
			name: "off"
			PropertyChanges {
				target: knob
				state: "off"
			}
			PropertyChanges {
				target: knob
				y: 50
			}
		}
	]

	transitions: [
		Transition {
			PropertyAnimation {
				target: knob
				property: "y"
				duration: 500
				easing.type: Easing.InOutElastic
				
			}
		}
	]
}
