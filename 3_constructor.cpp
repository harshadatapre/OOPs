#include<iostream>

using namespace std;

class Teacher {

private:    
    double salary;

public:
    //non-parameterised constructor
    Teacher() { 
        cout << "Hi, I am a constructor" << endl;
        dept = "Computer Science";  //initialization of dept value in Constructor
    }

    string name;
    string dept;
    string subject;
    
    void changeDept(string newDept) {
        dept = newDept;
    }

    void setSalary(double s) {
        salary = s;
    }

    double getSalary() {
        return salary;
    }
};

int main() {
    Teacher t1;  //when we create new object it automatically calls the constructor
    Teacher t2; 
    t1.name = "Harshada";
    t1.subject = "C++";
   
    
    cout << t1.name << endl << t1.dept << endl;

    t1.setSalary(25000);
    cout << t1.getSalary();

    return 0;
}