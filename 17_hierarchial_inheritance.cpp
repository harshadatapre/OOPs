#include<iostream>

using namespace std;

class Person {
public:
    string name;
    int age;
};

class Student : public Person {
public:
    int rollno;
};

class Teacher : public Person {
public:
    string subject;
};


int main() {
    Student s1;
    s1.name = "harshada";
    s1.rollno = 1;
    
    cout << s1.name << endl;
    cout << s1.rollno;
    
    return 0;
}