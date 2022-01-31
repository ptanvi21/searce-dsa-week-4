// Weighted Interval Scheduling

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> p1, pair<int,int> p2){
    return p1.second < p2.second;
}

int main(){
    int startTime[4] = { 1,3,6,2};
    int endTime[4] = {2,5,19,100};
    int profit[4] = {50,20,10,200}
    vector<vector<int>>v;
    for(int i=0; i<4;i++){
        v.push_back({startTime[i], endTime[i],profit[i]});
    }
    sort(v.begin(), v.end(),compare);
    vector<int> a(4,0);
    a[3] = v[3][2];
    for(int i=2;i>=0;i--){
        int temp = v[i][2];
        for(int j=i+1;j<4;j++){
            if(v[i][1]<=v[j][0]){
                temp += a[j];
                break;
            }
        }
        a[i] = max(temp, a[i+1]);
    }
    cout<<"Maximum profit is "<<a[0]<<endl;
    
}

// Time complexity: O(n^2)

/*
Output:

Non-Overlapping Intervals are
(1,3)
(4,5)
(6,8)
(9,10)

*/