#include <iostream>
#include <cstdlib>
using namespace std;

int main(void){
    char str[100] = "This is a test";

    cin.getline(str,100); //input array name and its size
    cout << "THe string is: " << str << endl;
    
    return 0;
}