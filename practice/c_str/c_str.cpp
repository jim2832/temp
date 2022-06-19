#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main(void){
    char a[80];
    string b;

    cout << "Please enter string b: ";
    cin >> b;

    strcpy(a, b.c_str()); //turn b from string into char array then assign to a

    cout << "The output char array a is: " << a << endl;

    return 0;
}