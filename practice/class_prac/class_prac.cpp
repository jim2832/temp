#include <iostream>
#include <string>
#include <math.h>
using namespace std;

class Square{
    public:
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

    private:
        int len;
};

int main(void){
    Square S1, S2;
    S1.setLen(10);
    S2.setLen(20);
    
    cout << "The length of S1 is: " << S1.getLen() << ", "
    << "The area of S1 is: " << S1.area() << endl;

    cout << "The length of S2 is: " << S2.getLen() << ", "
    << "The area of S2 is: " << S2.area() << endl;

    return 0;
}