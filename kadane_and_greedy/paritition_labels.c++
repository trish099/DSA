#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    vector<int> freq(26,-1);
    // time complexity :- O(n)
    // space complexity :- O(26+m) (m is for answer array)
    for(int i=0;i<s.size();i++){
        freq[s[i]-'a'] = i;
    }
    int end = 0,start = 0;
    vector<int> ans;
    for(int i=0;i<s.size();i++){
        end = max(end,freq[s[i]-'a']);
        if(end == i){
            ans.push_back(end-start+1);
            start = i+1;
        }
    }
    for(int i:ans){
        cout<<i<<" ";
    }
    return 0;
}