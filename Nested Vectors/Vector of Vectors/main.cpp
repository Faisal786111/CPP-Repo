#include <bits/stdc++.h>

using namespace std;

void printVector(vector<vector<int>> &v){
    for(vector<int> v1 : v){
        for(int no : v1){
            cout<<no << " ";
        }
        cout<<endl;
    }
}

int main(){
    // Vector of vector
    // Variable no of Rows and Variable no Columns
    vector<vector<int>> v = {
        {1, 2, 3},
        {4, 5}
    };

    printVector(v);

    vector<vector<int>> v1;
    v1.push_back({10 , 30});
    v1.push_back({0 , 1 , 3 ,4});
    cout<<endl;
    printVector(v1);

    // Insert vectors using for loop 
    int N;
    vector<vector<int>> v2; 

    cout<<"Enter no of vectors: ";
    cin>> N;
    for(int i = 0 ;i < N ;i++){
        int n;
        cout << "Enter the size of "<< i << " Vector :";
        cin>> n;
        
        // Temporary vector
        vector<int> temp;
        for(int j = 0; j <n; j++){
            cout<<"Enter the vector elements : ";
            int x;
            cin>> x;
            temp.push_back(x);
        } 

        v2.push_back(temp);
    }

    printVector(v2);

    return 0;
}