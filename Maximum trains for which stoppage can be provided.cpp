#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int maxStop(int arr[][3]){
    vector<pair<int,int>> v[3];//here 3 is 2 platforms but I am using 1 based indexing
    for(int i=0;i<5;i++)v[arr[i][2]].push_back(make_pair(arr[i][1], arr[i][0]));
    //sorting the departure time based on the platforms
    for(int i=0;i<=2;i++)sort(v[i].begin(),v[i].end());
    int answer=0;
     for (int i = 0; i <= 2; i++) {
        if (v[i].size() == 0)
            continue;
  
        // first train for each platform will
        // also be selected
        int x = 0;
        answer++;
        for (int j = 1; j < v[i].size(); j++) {
            if (v[i][j].second >=
                             v[i][x].first) {
                x = j;
                answer++;
            }
        }
    }
    return answer;
}

int main()
{
    int arr[5][3]={1000, 1030, 1,
                   1010, 1020, 1,
                   1025, 1040, 1,
                   1130, 1145, 2,
                   1130, 1140, 2 };//5 is number of trains and 3 is 3 columns arrival time , departure time and platform number
    cout<<"Maximum Number of trains that can be given a platform  = "<<maxStop(arr);
    return 0;
}
