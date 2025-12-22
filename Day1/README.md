# Day 1

## Lab - Install Qt Creator in Ubuntu from command-line
```
cd ~
sudo apt update
sudo apt install clang lld libclang-dev
sudo apt-get install build-essential
sudo apt-get install libfontconfig1
sudo apt-get install mesa-common-dev
sudo apt-get install libglu1-mesa-dev -y

sudo apt install -y qtcreator qtbase5-dev qt5-qmake cmake
qmake --version
qtcreator --version
qtcreator
```
<img width="1920" height="1200" alt="image" src="https://github.com/user-attachments/assets/9686cf7a-3f85-49a0-929f-877c8eb89cbf" />

## Info - Qt Overview
Clone the TekTutor Qt Training Repository
```
git clone https://github.com/tektutor/qt-dec-2025.git
cd qt-dec-2025
```

Generate Qt project file
```
cd ~/qt-dec-2025
git pull
cd Day1/QtHello
ls -l
qmake -project
```

Generate Makefile
```
cd ~/qt-dec-2025
cd Day1/QtHello
ls -l
qmake
cat Makefile
```
<img width="1920" height="1200" alt="image" src="https://github.com/user-attachments/assets/2c6c6371-5a69-4e8f-a4ad-bfc353b0c1df" />
<img width="1920" height="1200" alt="image" src="https://github.com/user-attachments/assets/b870fba8-e4db-4cc4-b91f-7126617d4f4c" />


Build and run the applicaiton
```
cd ~/qt-dec-2025
cd Day1/QtHello
ls -l
make
./QtHello
```
<img width="1920" height="1200" alt="image" src="https://github.com/user-attachments/assets/a4d6dd81-02cb-44bc-84cf-20c736bbd89e" />
<img width="1920" height="1200" alt="image" src="https://github.com/user-attachments/assets/131be00b-ddfa-4466-a901-e5d013d9e3c1" />

## Info - Qt Layout Managers
<pre>
- Qt Layout is an invisible canvas
- Qt Layout helps the Qt applications arrange widgets and show them in Qt Dialogs, MainWindows, etc
- Whenever the Qt Windows are resized, the layout associated with that window will detect the change in window size,
- the layout manager sends resize notifications to all its child widgets, it is upto the child widget either to ignore the resize event or resize themselves so that they are visible properly in the new window dimension
- Qt Widgets Framework supports many different types of layout managers
  1. Box Layout
  2. Horizontal Box Layout
  3. Vertical Box Layout
  4. Grid Layout
  5. Stacked Layout
</pre>
