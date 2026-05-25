#include<iostream>

using namespace std;

class Teacher {
private:    
    double salary;

public:
    string name;
    string dept;
    string subject;

    //non-parameterised constructor
    Teacher() { 
        dept = "Computer Science";  
    }

    // parameterised constructor
    Teacher(string name, string dept, string subject, double salary) {
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }

    void getInfo() {
        cout << "name:" << name << endl << "subject:" << subject;
    }
};

int main() {
    Teacher t1("Harshada", "computerScience", "C++", 25000);

    Teacher t2(t1); //default copy constructor - invoked

    t2.getInfo();

    return 0;
}