import QtQuick 2.7
import QtQuick.Controls 2.0

ApplicationWindow {
	width: 1000
	height: 1000
	visible: true
	color: "green"

	Timer {
		interval: 3000
		running: true
		repeat: true

		onTriggered: {
			console.log("Timer triggered")
			if ( trafficSignal.state == "stop" ) {
				trafficSignal.state = "ready"
				console.log ("Moving from stop to ready state")
			} 
			else if ( trafficSignal.state == "ready" ) {
				trafficSignal.state = "go"
				console.log ("Moving from ready to go state")
			}
			else if ( trafficSignal.state == "go" ) {
				trafficSignal.state = "stop"
				console.log ("Moving from go to stop state")
			}
		}
	}

	Rectangle {
		width: 600
		height: 50
		color: "black"
		x: 0
		y: 225
	}
	Column {
		anchors.centerIn: parent
		Rectangle {
			width: 50
			height: 50
			x: 75 
			color: "black"
		}

		Rectangle {
			id: trafficSignal
			width: 200
			height: 400
			color: "black"

			state: "stop"

			states: [
				State {
					name: "go"
					PropertyChanges {
						target: redLight
						lightState: "off"
					}
					PropertyChanges {
						target: yellowLight
						lightState: "off"
					}
					PropertyChanges {
						target: greenLight
						lightState: "on"
					}
				},
				State {
					name: "ready"
					PropertyChanges {
						target: redLight
						lightState: "off"
					}
					PropertyChanges {
						target: greenLight
						lightState: "off"
					}
					PropertyChanges {
						target: yellowLight
						lightState: "on"
					}
				},
				State {
					name: "stop"
					PropertyChanges {
						target: yellowLight
						lightState: "off"
					}
					PropertyChanges {
						target: greenLight
						lightState: "off"
					}
					PropertyChanges {
						target: redLight
						lightState: "on"
					}
				}
			]

			transitions: Transition {
				PropertyAnimation {
					target: trafficSignal 
					property: "state"
					duration: 1000
				}
			}

			Column {
				anchors.centerIn: parent
				spacing: 10

				Light {
					id: redLight
					lightColor: "red"
					lightState: "off"
				}
				Light {
					id: yellowLight
					lightColor: "yellow"
					lightState: "off"
				}
				Light {
					id: greenLight
					lightColor: "green"
					lightState: "off"
				}
			}
		}
	}
}
