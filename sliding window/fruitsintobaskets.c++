#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> fruits(n);
    for(int i=0;i<n;i++){
        cin>>fruits[i];
    }
    // time complexity :- O(n)
    // space complexity :- O(999999) -> O(1)
    int distinct=0,j=0,length = 0;
    vector<int> freq(999999,0);
    // or we can use unordered_map
    for(int i=0;i<n;i++){
        if(freq[fruits[i]]==0){
            distinct++;
        }
        freq[fruits[i]]++;
        while(distinct>2){
            freq[fruits[j]]--;
            if(freq[fruits[j]]==0){
                distinct--;
            }
            j++;
        }
        length = max(length,i-j+1);
    }
    cout<<length;
    return 0;
}