#include<iostream>

using namespace std;

// this 'Teacher' class is an example of Encapsulation
class Teacher {
    // by default both attributes and member functions are private in C++
    // properties / attributes
private:    
    double salary;

public:
    string name;
    string dept;
    string subject;
    

    // methods / member functions
    void changeDept(string newDept) {
        dept = newDept;
    }

    // function setter - use to set the private values 
    void setSalary(double s) {
        salary = s;
    }

    // function getter - use to get or return the private values 
    double getSalary() {
        return salary;
    }
};

int main() {
    Teacher t1;
    t1.name = "Harshada";
    t1.subject = "C++";
    t1.dept = "Computer Science";
    // t1.salary = 25000; cannot access this because salary is a private attribute

    cout << t1.name << endl;

    t1.setSalary(25000);
    cout << t1.getSalary();

    return 0;
}