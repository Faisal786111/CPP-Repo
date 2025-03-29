#include <bits/stdc++.h>
using namespace std;

template <typename T>
void printVector(vector<T> v) {
    cout << "Vector Size: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++) {
        // v.size() -> O(1)
        cout << v[i] << " ";
    }

    cout << endl;
}

int main(){
    // Vector: A vector in C++ is like a resizable array.

    // Syntax:
    // vector<datatype> vector_name;
    
    // Methods:
    /*
        1.push_back()
        2.pop_back()
        3.size()
        4.front()
        5.back()
        6.empty() -> 0 full -> 1
        7.at() to get specific index value 
    */

    vector<string> cars = {"volvo, swift, lambo"};

    vector<string> c = cars; // O(n) -> expensive operation
    vector<string> &c2 = cars; // O(n) -> expensive operation
    c.push_back("Bugati");
    c2.push_back("Range rover");
    printVector(cars);
    printVector(c2);
    printVector(c);

    cout<<cars.front()<<endl;
    cout<<cars.back()<<endl;

    cout<<cars.at(0) <<endl;
    cout<<cars.empty() <<endl;

    // for each loop 
    cout <<"For each loop: " <<endl;
    for(string car : cars){
        cout << car;
    }
    cout <<endl;

    vector<int> v(10, 7); // default 0
    v.push_back(9);
    printVector(v);

    vector<int> v1;
    printVector(v1);

    

    // vector<int> v;
    // int n;
    // cin>> n;
    // for(int i =0 ;i < n;i++){
    //     int x;
    //     cin >> x;
        // printVector(v);
    //     v.push_back(x); // O(1): To insert an elemetn in the vector 
    // }

    // printVector(v);
    
    // v.pop_back();
    // printVector(v);

    return 0;
}
