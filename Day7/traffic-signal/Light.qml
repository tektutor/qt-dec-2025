import QtQuick 2.7

Rectangle {
	property string lightColor: "black"
	property string lightState: "off"

	width: 100
	height: 100
	radius: 50
	color: "white" 

	Rectangle {
		id: light
		width: 96 
		height: 96 
		radius: 48
		color: lightColor 
		border.color: "black"
		border.width: 3

		anchors.centerIn: parent
		state: lightState 

		states : [
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
					color: "black"
				}
			}
		]
	}
}
