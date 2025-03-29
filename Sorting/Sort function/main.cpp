#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 5;
    int a[n]= {10, 0, 8, 1, 9};

    // Syntax: 
    // sort(start address, end address); 
    // It uses Intro Sort which is a mixture/combination of insertion, heap & quick sort

    // sort(a, a+n); // 0, 1, 8, 9, 10
    // sort(a+2, a+n); // 10, 0, 1, 8, 9
    sort(a, a+3); // Sort 0th ,1st and 2nd indices
    // 0, 8, 10, 1, 9

    for(auto &no: a){
        cout<<no <<" ";
    }

    // Sort vector 
    vector<int> nums = {10, 0, 8, 1, 9};
    sort(nums.begin(), nums.end());

    cout<<endl;
    for(auto &no: nums){
        cout<<no <<" ";
    }
    return 0;
}