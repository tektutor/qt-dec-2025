import sys

from PyQt5.QtWidgets import (
    QApplication, QDialog, QLabel,
    QPushButton, QVBoxLayout
)

class MyDialog(QDialog):

    #constructor
    def __init__(self):
        super().__init__()
        self.setWindowTitle("Dialog Based App")

        label = QLabel("Hello PyQt Dialog")

        okBtn = QPushButton("OK")
        cancelBtn = QPushButton("Cancel")

        okBtn.clicked.connect(self.accept)
        cancelBtn.clicked.connect(self.reject)

        layout = QVBoxLayout()
        layout.addWidget(label)
        layout.addWidget(okBtn)
        layout.addWidget(cancelBtn)

        self.setLayout(layout)

# python main entrypoint function equivalent
if __name__ == "__main__":
    app = QApplication(sys.argv)
    dlg = MyDialog()

    result = dlg.exec_()
    print("Accepted" if result == QDialog.Accepted else "Rejected")
