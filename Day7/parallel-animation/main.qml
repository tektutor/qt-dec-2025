import QtQuick 2.7
import QtQuick.Controls 2.0

ApplicationWindow {
	width: 1000
	height: 1000
	visible: true
	color: "green"

	Rectangle {
		id: blueRect
		width: 50
		height: 50
		color: "blue"
	}
	Rectangle {
		id: redRect
		x: 950
		y: 950
		width: 50
		height: 50
		color: "red"
	}

	ParallelAnimation {
		running: true
		loops: Animation.Infinite

		SequentialAnimation {
			running: true
			NumberAnimation {
				target: blueRect
				property: "x"
				to: 950
				duration: 2000
			}
			NumberAnimation {
				target: blueRect
				property: "y"
				to: 950
				duration: 2000
			}
			NumberAnimation {
				target: blueRect
				property: "x"
				to: 0
				duration: 2000
			}
			NumberAnimation {
				target: blueRect
				property: "y"
				to: 0
				duration: 2000
			}
		}
		SequentialAnimation {
			NumberAnimation {
				target: redRect
				property: "x"
				to: 0
				duration: 2000
			}
			NumberAnimation {
				target: redRect
				property: "y"
				to: 0
				duration: 2000
			}
			NumberAnimation {
				target: redRect
				property: "x"
				to: 950 
				duration: 2000
			}
			NumberAnimation {
				target: redRect
				property: "y"
				to: 950 
				duration: 2000
			}
		}
	}
}
