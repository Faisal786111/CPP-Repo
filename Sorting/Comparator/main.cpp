#include <bits/stdc++.h>
using namespace std;

// Comparator Function
bool should_i_swap(int a, int b){
    if (a < b) return true;
    return false;
}

int main(){
    int arr[] = {40, 1, 23 , 9, 100};
    int n = sizeof(arr)/ sizeof(arr[0]);
    for(int i = 0 ;i < n; i++){
        for(int j = 0 ; j< n; j++){
            if(should_i_swap(arr[i], arr[j])){ // here is the main logic
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(auto num: arr){
        cout<< num << " ";
    }
    return 0;
}