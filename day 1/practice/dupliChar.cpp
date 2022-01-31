// Write a function to determine whether a string contains repeated characters

#include<iostream>
#include<set>
using namespace std;

int main(){
    string s;
    cout<<"Enter string:"<<endl;
    cin>>s;
    bool flag = false;
    set<char>st;
    for(int i=0;i<s.size();i++){
        if(st.find(s[i]) != st.end()){
            flag = true;
            break;
        }
        else{
            st.insert(s[i]);
        }
    }
    if(flag==true){
            cout<<"Given string has duplicate characters"<<endl;
    }
    else{
            cout<<"Given string do not have duplicate characters"<<endl;
    }
}

// Time complexity: O(n^2)

/*

Output:

Enter string:
hello
Given string has duplicate characters

Enter string:
abcd
Given string do not have duplicate characters

*/