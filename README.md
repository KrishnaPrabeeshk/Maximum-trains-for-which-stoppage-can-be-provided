# Maximum-trains-for-which-stoppage-can-be-provided
Problem Statement :  Given n-platform and two main running railway track for both direction. Trains which needs to stop at your station must occupy one platform for their stoppage and the trains which need not to stop at our station will run away through either of main track without stopping. Now, each train has three value first arrival time, second departure time and third required platform number. We are given m such trains we have to tell maximum number of train for which we can provide stoppage at our station.
Example : Input : n = 3, m = 6 
Train no.|  Arrival Time |Dept. Time | Platform No.
    1    |   10:00       |  10:30    |    1
    2    |   10:10       |  10:30    |    1
    3    |   10:00       |  10:20    |    2
    4    |   10:30       |  12:30    |    2
    5    |   12:00       |  12:30    |    3
    6    |   09:00       |  10:05    |    1
Output : Maximum Stopped Trains = 5
Explanation : If train no. 1 will left 
to go without stoppage then 2 and 6 can 
easily be accommodated on platform 1. 
And 3 and 4 on platform 2 and 5 on platform 3.

Input : n = 1, m = 3
Train no.|Arrival Time|Dept. Time | Platform No.
    1    | 10:00      |  10:30    |    1
    2    | 11:10      |  11:30    |    1
    3    | 12:00      |  12:20    |    1
           
Output : Maximum Stopped Trains = 3
Explanation : All three trains can be easily
stopped at platform 1.
Algorithm : If we start with a single platform only then we have 1 platform and some trains with their arrival time and departure time and we have to maximize the number of trains on that platform.  So, for n platforms we will simply make n-vectors and put the respective trains in those vectors according to platform number. After that by applying greedy approach we easily solve this problem.
Constraints :  We will take input in form of 4-digit integer for arrival and departure time as 1030 will represent 10:30 so that we may handle the data type easily.
Also, we will choose a 2-D array for input as arr[m][3] where arr[i][0] denotes arrival time, arr[i][1] denotes departure time and arr[i][2] denotes the platform for ith train.
