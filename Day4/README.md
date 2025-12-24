# Day 4

## Lab - Thread Synchronization with QWaitCondition and Mutex

Note
<pre>
- In this example, there are 3 gardeners who will be given some number of saplings to be planted in a huge botanical garden
- Each gardener does a specific type of work
  - Gardener 1 only digs pit
  - Gardener 2 will plant a sapling in the pit digged by Gardener 1
  - Gardener 3 will give compost to the sampling, fills the pit and waters the sapling
  - We have synchronized these 3 gardener threads with 3 QWaitCondition and a single mutex
</pre>
Let's proceed

```
cd ~/qt-dec-2025
git pull
cd Day4/ThreadSynchronization
qmake
make
./
```
<img width="1920" height="1200" alt="image" src="https://github.com/user-attachments/assets/6bd3d2ed-cad6-4c60-ae9c-3b51b562f0c2" />
