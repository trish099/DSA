#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> ratings(n);
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>ratings[i];
    }
    // time complexity :- O(n)
    // space complexity :- O(n)
    vector<int> candies(n,1);
    for(int i=1;i<n;i++){
        if(ratings[i]>ratings[i-1]){
            candies[i] = candies[i-1] + 1;
        }
    }
    for(int i=n-2;i>=0;i--){
        if(ratings[i]>ratings[i+1]){
            candies[i] = max(candies[i],candies[i+1]+1);
        }
    }
    for(int i:candies){
        ans += i;
    }
    cout<<ans;
    // why we didnt do candies[i]++;? 
    // because suppose previous child was given 2 candies next child should be given 3(like a chain of ratings) 
    // ie 1 2 3 2
    // in this case candies given should be 7 ie 1 2 3 1

    // why we check i,i+1(next child priority) differently than previous child priorty 
    //  ie  1 3 2
    // in this case answer will be 4 ie 1 2 1
    // as at 1st index i,i-1 comparision already increment number of candies
    // so candies[i] will be the answer in case of 2nd loop 
    // if just i+1th element is greater then candies[i+1]+1 will be the answer 

    return 0;
}
