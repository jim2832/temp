#include <iostream>
using namespace std;

void show(int x){
    cout << "This is an int: " << x << endl;
}

void show(int x, int y){
    cout << "These are two ints: " << x << "," << y << endl;
}

int main(void){
    show(10);
    show(20, 30);

    return 0;
}