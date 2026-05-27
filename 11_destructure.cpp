#include<iostream>

using namespace std;

class Student {
public:
    string name;
    double* cgpaPtr;

    Student(string name, double cgpa) {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    ~Student() {
        cout << "Hi, I deletes everything";
        delete cgpaPtr;
    }

    void getInfo() {
        cout << "name: " << name << endl;
        cout << "cgpa: " << *cgpaPtr << endl;
    }
};

int main() {
    Student s1("Rahul kumar", 8.9);
    
    s1.getInfo();
    
    return 0;
}