// longest substring without repeating characters
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int j=0,length =0;
    vector<int> freq(256,0);
    // time complexity O(n)
    // space complexity O(256) ->O(1)
    for(int i=0;i<s.size();i++){
        freq[s[i]]++;
        while(freq[s[i]]>1){
            freq[s[j]]--;
            j++;
        }
        length = max(length,i-j+1);
    }
    cout<<length;
    return 0;
}