#include <iostream>
#include <string>
using namespace std;

int main(void){
    string str;
    int n;

    cout << "Please enter a string: ";
    cin >> str;

    n = str.length(); // the length of string
    cout << "The length of the string is: " << n << endl;
    cout << "The string is: " << endl;
    for(int i=0; i<n; i++){
        cout << "["<< i <<"]:" << str[i] << endl;
    }

    return 0;
}