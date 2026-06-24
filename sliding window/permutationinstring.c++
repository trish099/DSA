#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_set>
using namespace std;

int main(){
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    vector<int> freq1(256,0),freq2(256,0);
    // time complexity :- O(m+n)
    
    if(s1.size() > s2.size()){
        cout<<false;
        return 0;
    }
    for(char i : s1){
        freq1[i-'a']++;
    }
    int n = s1.size();
    for(int i=0;i<n;i++){
        freq2[s2[i]-'a']++;
    }
    if(freq1==freq2){
        cout<<true;
        return 0;
    }
    for(int i=n;i<s2.size();i++){
        freq2[s2[i]-'a']++;
        freq2[s2[i-n]-'a']--;
        if(freq1==freq2){
            cout<<true;
            return 0;
        }

    }
    cout<<false;
    return 0;
}