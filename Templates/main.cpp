#include <bits/stdc++.h>
#include <iostream>
using namespace std; 

// Class Tempalte
template <class T>
class Stack { 
    T s[10];
    int top;
    
    public: 
    Stack() { 
        top = -1; 
    }
    void push(T x);
    T peak();
};

// For each function we need to use template
template <class T>
void Stack<T> :: push(T x) {
    s[++top] = x; 
}

template <class T>
T Stack<T>::peak() { 
    return s[top];
}

// Template with multiple data types
// Function Template
template <class T, class R>
void add(T a, R b) { 
    cout << a + b << endl;
}


int main()
{
    Stack<int> st; 
    
    st.push(10);
    cout << st.peak() << endl;

    add(10, 10.2); 
    return 0;
}