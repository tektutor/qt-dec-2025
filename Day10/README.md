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
