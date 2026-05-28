#include<iostream>

using namespace std;

void fun() {
    static int x = 0;   //make this x static
    cout << "x : " << x << endl;
    x++;
}

int main() {
    fun();
    fun();
    fun();
    return 0;
}


