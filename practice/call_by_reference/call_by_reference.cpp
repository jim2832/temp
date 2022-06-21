#include <iostream>
using namespace std;

void MySwap(int &a, int &b);

int main(void){
    int a = 10, b = 5;

    cout << "Before the swap:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    
    cout << endl;
    MySwap(a, b); //call by reference

    cout << "After the swap:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}

void MySwap(int &a, int &b){
    int temp;
    
    temp = a;
    a = b;
    b = temp;
}