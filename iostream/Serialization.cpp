#include<iostream>
#include<fstream>

using namespace std; 

class Student { 
    string fname;
    int rollno;
    string branch; 
    
    public: 
    Student(string fname, int rollno, string branch) { 
        this->fname = fname;
        this->rollno = rollno;
        this->branch = branch; 
    }
    
    // Friend operator overloading
    friend ofstream & operator<<(ofstream &ofs, Student &s);
    friend ifstream & operator>>(ifstream &ifs, Student &s);
    
    friend ostream & operator<<(ostream &cout, Student &s);
};

ofstream & operator<<(ofstream &ofs, Student &s) { 
    ofs << s.fname << endl;
    ofs << s.rollno << endl;
    ofs << s.branch << endl;
    return ofs; 
}

ifstream & operator>>(ifstream &ifs, Student &s) { 
    ifs >> s.fname >> s.rollno >> s.branch; 
    return ifs;
}

ostream & operator<<(ostream &cout, Student &s) {
    cout << s.fname << endl;
    cout << s.rollno << endl;
    cout << s.branch << endl;
    return cout; 
}

int main() { 
    Student s1("faisal", 197, "CS");
    
    // Write object to the file
    ofstream ofs("Students.txt", ios::trunc); 
    
    // This thing we have to write for each object to avoid this 
    // we will overload insertion operator (<<) on objects
    // ofs << s1.fname << endl;
    // ofs << s1.rollno << endl;
    // ofs << s1.branch << endl;
    
    // Storing the state of an object into the file
    ofs << s1;
    
    ofs.close(); 
    
    // Reading the obj from the file 
    ifstream ifs("Students.txt");
    if(!ifs) cout << "File is not there" << endl;
    
    // We will overload Extraction operator(>>) on objects
    // ifs >> s1.fname >> s1.rollno >> s1.branch; 
    
    ifs >> s1;  // Retreiving the state of an obj from the file.
    ifs.close(); 
    
    cout << s1; 
    
}