#include <iostream>
#include <string>
#include <string.h>
using namespace std;
void swap(int* x, int* y);
void bubble_sort(int n, int *P);

int main(void){
    int size;
    int *p;

    cout << "Please enter the size: ";
    cin >> size;
    p = new int[size]; //dynamic allocation

    //input
    for(int i=0; i<size; i++){
        cin >> p[i];
    }

    //sorting
    bubble_sort(size, p);

    //output
    for(int i=0; i<size; i++){
        cout << p[i] << " ";
    }

    delete[] p;

    return 0;
}

void bubble_sort(int n, int *P){
    int flag = 1;
    for(int i=1; (i<n) && (flag!=0); i++){
        flag = 0;
        for(int j=0; j<n-i; j++){
            if(P[j] > P[j+1]){
                swap(P[j], P[j+1]);
                flag = 1;
            }
        }
    }
}


void swap(int* x, int* y){
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}