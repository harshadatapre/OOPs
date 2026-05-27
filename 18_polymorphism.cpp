#include<iostream>

using namespace std;

// constructor overloading

class Student {
public:
    string name;

    Student() {
        cout << "non-parameterised constructor\n";
    }

    Student(string name) {
        this->name = name;
        cout << "parameterised constructor\n";
    }
};

int main() {
    Student s1("tony stark");

    return 0;
}