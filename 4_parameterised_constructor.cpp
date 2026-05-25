#include<iostream>

using namespace std;

// single class has multiple consturctors
// having matching parameters constructor will be called
class Teacher {
private:    
    double salary;

public:
    //non-parameterised constructor
    Teacher() { 
        dept = "Computer Science";  
    }

    // parameterised constructor
    Teacher(string n, string d, string s, double sal) {
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }

    string name;
    string dept;
    string subject;
    
    void changeDept(string newDept) {
        dept = newDept;
    }

    void getInfo() {
        cout << "name:" << name << " subject:" << subject;
    }
};

int main() {
    Teacher t1("Harshada", "computerScience", "C++", 25000);  
    t1.getInfo();

    return 0;
}