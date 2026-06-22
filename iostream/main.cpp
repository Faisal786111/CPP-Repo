#include <iostream>
#include <bits/stdc++.h>
#include <fstream>

using namespace std; 

int main()
{
    // It will create the file if it is not present
    ofstream outfile("MyFile.txt"); // default ios::trunc
    // ofstream outfile("MyFile.txt", ios::app);
    
    // we have two modes : ios::app (append) , ios::trunc (By default)
    
    outfile << "Faisal khan " << endl;
    outfile << 21 << endl;
    
    outfile.close(); // it is good practice to close the file 
    
    // File must be there for reading 
    ifstream infile("MyFile.txt");
    // infile.open("MyFile.txt");
    
    if(!infile.is_open()) cout << "File is not present" << endl;
    
    string fname, lname;
    int age;
    
    infile >> fname;
    infile >> lname;
    infile >> age; 
    
    cout << "First Name: " << fname << endl;
    cout << "Last Name: " << lname << endl;
    cout << "Age: " << age << endl;
    
    if(infile.eof()) cout << "End of File is reached" << endl;
    infile.close(); 
    return 0;
}