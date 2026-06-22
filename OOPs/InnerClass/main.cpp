#include <bits/stdc++.h>
using namespace std;

class Outer{
    public:
    int a;
    static int count; 

    void display(){
        cout << i.x << endl;
        i.show(); 
    }

    class Inner{ 
        // Inner class can only access static Members (Data/Function)
        public: 
        int x; 

        void show() {
            cout << count << endl;
            // cout << a << endl; // Compilation Error
        }
    };
    Inner i; // It should be created after the defintion.
};

// Linked List Exmaple
class LinkedList{
    class Node { 
        int data;
        Node *next; 
    };

    Node *head;
    // all the rest of ADT of LinkedList 
    /*
        This is how it breaks the complexit of LinkedList by writing the inner classes.
        And Improves the readability of the program.
    */
};

int Outer::count = 0; 

int main(){
    Outer::Inner i; // only when if it is in public mode.
    Outer o;
    o.display();
    
    return 0;
}