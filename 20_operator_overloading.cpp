#include<iostream>

using namespace std;

class Box {
public:
    int weight;

    // constructor
    Box(int weight) {
        this->weight = weight;
    }

    // OVERLOADING THE '+' OPERATOR
    // This tells C++ how to add two Box objects
    Box operator + (const Box& other) {
        return Box(this->weight + other.weight);
    }
};

int main() {
    Box b1(10);
    Box b2(20);

    // Using our overloaded '+' operator
    Box totalBox = b1 + b2;

    cout << totalBox.weight;

    return 0;
}