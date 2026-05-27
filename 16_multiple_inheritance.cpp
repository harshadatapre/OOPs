#include<iostream>

using namespace std;

class Student {
public:
    string name;
    int rollno;
};

class Teacher {
public:
    string subject;
    double salary;
};

class TeachingAsistant : public Student, public Teacher {

};

int main() {
    TeachingAsistant t1;

    t1.name = "tony stark";
    t1.subject = "engineering";

    cout << t1.name << endl;
    cout << t1.subject;

    return 0;
}