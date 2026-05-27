#include<iostream>

using namespace std;

class Person {
public:
    string name;
    int age;

    // Person(string name, int age) {
    //     this->name = name;
    //     this->age = age;
    // }

    Person() {
        cout << "parent class constructure" << endl;
    }

    ~Person() {
        cout << "parent class destructure" << endl;
    }

};

class Student : public Person{
public:
    int rollno;

    Student() {
        cout << "child class constructure" << endl;
    }

    ~Student() {
        cout << "child class destructure" << endl;
    }

    void getInfo() {
        cout << name << endl;
        cout << age << endl;
        cout << rollno << endl;
    }
};

int main() {
    Student s1;
    s1.name = "Rahul kumar";
    s1.age = 24;
    s1.rollno = 123;

    s1.getInfo();

    return 0;
}