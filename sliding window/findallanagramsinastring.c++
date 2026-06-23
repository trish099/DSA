#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;

int main(){
    string s;
    string p;
    unordered_map<char,int> freq1(256,0),freq2(256,0);
    getline(cin,s);
    getline(cin,p);
    // time complexity :- O(n)
    // space complexity :- O(1)
    vector<int> ans;
    if(p.size()>s.size()){
        return 0;
    }
    for(char i:p){
        freq1[i-'a']++;
    }
    int n = p.size();
    for(int i=0;i<n;i++){
        freq2[s[i]-'a']++;
    }
    if(freq1 == freq2){
        ans.push_back(0);
    }
    for(int i=n;i<s.size();i++){
        freq2[s[i]-'a']++;
        freq2[(s[i]-n)-1]--;
        if(freq1 ==freq2){
            ans.push_back(i-n+1);
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    
    return 0;
}