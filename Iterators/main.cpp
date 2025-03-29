#include <bits/stdc++.h>
using namespace std;

int main(){
    // Iterator to vectors 
    // It is a pointer which is used to pointi particular element
    // Syntax: 
    // containerName :: iterator iteratorName

    // Difference between it+1 and it++ :
    // Continuity: it+1 and it++ both will work 
    // Discontinuity: it+1 will never work only it++ work bcoz it will go to the next iterator which points to that element
    
    vector<int> v = {10 , 20 , 30};

    vector<int> :: iterator it = v.begin();
    cout<< (*it) << endl;

    for(it = v.begin(); it!=v.end(); it++){
        cout << (*it) << " ";
    }
    cout<< endl;

    // Iterator to pairs 
    vector<pair<int , int>> p = {{1,2}, {1,3} , {1,4}};
    
    vector<pair<int, int>> :: iterator it1;
    for(it1 = p.begin(); it1!=p.end(); it1++){
        cout<<(*it1).first << ": "<<(*it1).second<<endl;
    }

    cout<<endl;
    for(it1 = p.begin(); it1!=p.end(); it1++){
        cout<<it1->first << ": "<<it1->second<<endl;
    }


    return 0;
}