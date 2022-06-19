#include <iostream>
using namespace std;

int main(void){
    char a[100], b[100];

    cin >> a;
    //fflush(stdin);
    cin.ignore();
    cin.getline(b,100);

    cout << "The string is: " << a << endl;
    cout << "The string is: " << b << endl;
    
    return 0;
}