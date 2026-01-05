# Day 10

## Lab - Installing PyQt in Ubuntu

#### To install PyQt5 
```
sudo apt update
sudo apt install -y python3 python3-pip python3-venv
pip install PyQt5  --break-system-packages
pip install PyQt5-tools 
# To verify
python -c "from PyQt5.QtWidgets import QApplication; print('PyQt5 OK')"
```

#### To install PyQt6
```
pip install PyQt6
```

## Lab - Running the PyQt Qt Widgets application
```
cd ~/qt-dec-2025
git pull
cd Day10/PyQtExample
python3 main.py
```

<img width="1920" height="1200" alt="image" src="https://github.com/user-attachments/assets/e5215abb-19a3-4c07-af01-4b79e841cd13" />
<img width="1920" height="1200" alt="image" src="https://github.com/user-attachments/assets/5dff0f4c-0d10-43f5-b335-c95aa90e9d30" />
<img width="1920" height="1200" alt="image" src="https://github.com/user-attachments/assets/3d7fc653-a72c-4140-932f-1dd4b301cfeb" />

## Lab - Running the PyQt QML application
```
cd ~/qt-dec-2025
git pull
cd Day10/PyQtWithQML
python3 main.py
```
<img width="1920" height="1200" alt="image" src="https://github.com/user-attachments/assets/bf1ecab4-e17b-4bd6-b793-de3b4331253a" />
<img width="1920" height="1200" alt="image" src="https://github.com/user-attachments/assets/299ed945-d317-4ae1-a84e-ec17aee5db8e" />
