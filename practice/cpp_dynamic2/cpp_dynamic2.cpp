#include <iostream>
using namespace std;

int main(void){
    int *ptr;
    int size;

    cout << "Please enter the number:";
    cin >> size;

    ptr = new int[size]; // dynamic allocate
    cout << "Please enter the content:" << endl;
    for(int i=0; i<size; i++){
        cout << "ptr["<< i <<"] = "; // ptr[i] = 
        cin >> ptr[i];
    }

    cout << "---------------" << endl;

    for(int i=0; i<size; i++){
        cout << "ptr["<< i <<"] = " << ptr[i] << endl;
    }

    delete[] ptr; //delete the dynamic array

    return 0;
}