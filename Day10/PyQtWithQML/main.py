import sys
from PyQt5.QtWidgets import QApplication
from PyQt5.QtQml import QQmlApplicationEngine


app = QApplication(sys.argv)
engine = QQmlApplicationEngine()
engine.load("main.qml")
sys.exit(app.exec_())
