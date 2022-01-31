// Given a string of any length, find the most-used character in a string

#include<iostream>
#include<map>
using namespace std;

int main(){
    string s ;
    cout<<"Enter string:"<<endl;
    cin>>s;
    map<char,int>m;
    for(int i=0;i<s.size();i++){
        m[s[i]]++;
    }
    int maxCount = 0;
    char ans;
    for(int i=0;i<m.size();i++){
        if(m[s[i]] > maxCount){
            maxCount = m[s[i]];
            ans = s[i];
        }
    }
    cout<<"Most used charater in the given string is "<<ans<<endl;
}

// Time Complexity - O(n)

/*
Output:

Enter string:
abccaaabbaac
Most used charater in the given string is a
*/