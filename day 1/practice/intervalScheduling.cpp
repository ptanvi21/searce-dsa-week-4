// Interval Scheduling

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> p1, pair<int,int> p2){
    return p1.second < p2.second;
}

int main(){
    int startTimes[10] = { 2, 3, 1, 4, 3, 2, 6, 7, 8, 9};
    int endTimes[10] = {4, 4, 3, 5, 5, 5, 8, 9, 9, 10};
    vector<pair<int,int>> v;
    for(int i=0; i<10;i++){
        v.push_back(make_pair(startTimes[i], endTimes[i]));
    }
    sort(v.begin(), v.end(),compare);
    vector<int> a;
    for(int i=0; i<10; ++i)
    {
        auto job = v[i];
        bool flag = true;
        for(auto jobIndex : a)
        {
            if(job.second >= v[jobIndex].first && job.first  <= v[jobIndex].second)
            {
                flag = false;
                break;
            }
        }
        if(flag)
            a.push_back(i);
    }
    cout<<"Non-Overlapping Intervals are"<<endl;
    for(auto i : a){
        cout << "(" <<v[i].first<< ","<<v[i].second<< ") "<<endl;
    }
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