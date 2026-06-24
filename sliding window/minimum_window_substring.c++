#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

int main(){
    string s,t;
    getline(cin,s);
    getline(cin,t);
    vector<int> freq(256,0);
    int n = s.size();
    int m = t.size();
    int count = 0,l=0,minlen = INT_MAX, index = -1;
    if(n<m){
        cout<<"";
        return 0;
    }
    for(char i:t){
        freq[i]++;
    }
    for(int i=0;i<n;i++){
        if(freq[s[i]]>0){
            count++;
        }
        freq[s[i]]--;
        while(count == m){
            if(minlen > i-l+1){
                minlen = i-l+1;
                index = l;
            }
            freq[s[l]]++;
            if(freq[s[l]]>0){
                count--;
            }
            l++;
        }
    }
    if(index == -1){
        cout<<"";
        return 0;
    }
    cout<<s.substr(index,minlen);
    return 0;
}