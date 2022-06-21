#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main(void){
    int var = 10;
    int *ptr = &var; //pointer
    int &ref = var; //reference

    cout << "var: " << var << endl;
    cout << "*ptr: " << *ptr << endl;
    cout << "ref: " << ref << endl;

    ref = 20;
    cout << endl;

    cout << "var: " << var << endl;
    cout << "*ptr: " << *ptr << endl;
    cout << "ref: " << ref << endl;

    return 0;
}