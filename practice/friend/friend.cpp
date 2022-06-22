#include <iostream>
#include <string>
#include <math.h>
using namespace std;

class Square{
    public:
        //constructor
        Square(){
            len = 0;
        }
        //overload
        Square(int n){
            setLen(n);
        }

        //return the area
        int area(){
            int area = pow(len, 2);
            return area;
        }

        //set the length
        void setLen(int n){
            if(n < 0){
                cout << "The length can't be less than zero" << endl;
                len = 0;
                return;
            }
            len = n;
        }

        //return the length
        int getLen(){
            return len;
        }

        friend int compare(Square &S1, Square &S2){
            // can access the private member
            if(S1.len == S2.len){
                return 0;
            }
            else if(S1.len > S2.len){
                return 1;
            }
            else{
                return -1;
            }
        }

    private:
        int len;
};

int main(void){
    Square S1, S2, S3;
    int n1,n2;
    cin >> n1 >> n2;
    S1.setLen(n1);
    S2.setLen(n2);

    cout << "Area = " << S1.area() << "cm^2" << endl;
    cout << "Area = " << S2.area() << "cm^2" << endl;
    cout << "Area = " << S3.area() << "cm^2" << endl;
    
    /*
    cout << "The length of S1 is: " << S1.getLen() << ", "
    << "The area of S1 is: " << S1.area() << endl;

    cout << "The length of S2 is: " << S2.getLen() << ", "
    << "The area of S2 is: " << S2.area() << endl;

    cout << "The length of S3 is: " << S3.getLen() << ", "
    << "The area of S3 is: " << S3.area() << endl;
    */

    return 0;
}