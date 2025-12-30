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
		border.width: 2

		SequentialAnimation {
			running: true
			loops: Animation.Infinite
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
	}

}
