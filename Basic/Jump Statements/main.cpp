#include <bits/stdc++.h>
using namespace std;

/**
 * Life, the Universe, and Everything
 * Your program is to use the brute-force approach in order to find the Answer to Life, the Universe, and Everything. More precisely... rewrite small numbers from input to output. Stop processing input after reading in the number 42. All numbers at input are integers of one or two digits.
 */

int main(){
    
    while(1){
        int n;
        cin >> n;
        if(n == 42){
            break;
        }
        cout << n << endl;
    }

    return 0;
}