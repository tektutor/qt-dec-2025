import QtQuick 2.15
import QtQuick.Controls 2.15
import TekTutor 1.3

ApplicationWindow {
	id: topWindow

	width: 500
	height: 500
	visible: true

	title: "QML Signal with Qt Slot"

	property string caption: "Click Me"
	
	//This will create an instance of MyClass Cpp class
	TekTutorMyClass {
		id: myClass 
	}

	Connections {
		target: myClass
		function onCppSignal() { qmlSlotFunction() } 
	}

	function qmlSlotFunction() {
		console.log("QML Slot function invoked ...")
	}

	MouseArea {
		anchors.fill: parent

		onClicked:
			myClass.emitSignal()
	}


}
