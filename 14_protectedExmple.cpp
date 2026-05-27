#include<iostream>

using namespace std;

class Person {
public:
    string name;
    int age;

    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }
};

class Student : protected Person{
public:
    int rollno;

    Student(string name, int age, int rollno) : Person(name, age) {
        this->rollno = rollno;
    }

    void getInfo() {
        cout << name << endl;
        cout << age << endl;
        cout << rollno << endl;
    }
};

int main() {
    Student s1("rahul kumar", 21, 1234);
    
    s1.getInfo();

    // cout << s1.name;   cannot do this, because we have inherited Person class in protected mode

    return 0;
}