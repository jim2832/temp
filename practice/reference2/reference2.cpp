#include <iostream>
#include <string>
#include <string.h>
using namespace std;

void increment(int &n){
    n++;
}

int main(void){
    int x = 10;
    increment(x); //call by reference
    cout << "x = " << x << endl;

    return 0;
}