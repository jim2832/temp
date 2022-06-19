#include <iostream>
using namespace std;

int main(void){
    int *ptr = new int(100); //*ptr == 100;
    cout << "The address is: " << ptr << endl;
    cout << "The value is: " << *ptr << endl;

    *ptr = 200;
    cout << "The address is: " << ptr << endl;
    cout << "The value is: " << *ptr << endl;

    delete ptr;

    return 0;
}