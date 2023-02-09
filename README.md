# Week5 Assignment

### Problem 1

Performance Comparison:

File | Time Taken (Seconds) | Counter | 
--- | --- | --- 
DistributedCountertest1.cpp | 1341014ms | 1000000000 | 
DistributedCountertest2.cpp | 6915ms | 1000000000 | 
DistributedCountertest3.cpp | 236995ms | 1000000000 |

It seems like DistributedCountertest2 ran the fastest. The external factors contributing to the speed could be the background processes, cores etc.

### Problem 2

Output with jThreads for Distribited Counter Code
```
Count is 1000000000
Elapsed time is 49289ms
```

`jThreads` version seems to work faster since it not only ran faster but also we dont have to join the threads. Athought we need to add yield else the counter was exiting and giving wrong value.

