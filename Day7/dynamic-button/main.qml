import QtQuick 2.7
import QtQuick.Controls 2.0

ApplicationWindow {
	width: 500
	height: 500
	visible: true

	Grid {
		anchors.centerIn: parent
		rows: 3 
		columns: 3 
		spacing: 5

		Repeater {
			model: 100 
			CustomButton {}

			onItemAdded: {
				item.caption = index + 1	
				item.buttonColor   = "orange"
			}

		}
	}
}
