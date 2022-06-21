#include <iostream>
#include <string>
using namespace std;

class Square{
    public:
        int len;

        int area(){
            int area = len * len;
            return area;
        }
};

int main(void){
    Square S1, S2;
    S1.len = 10;
    S2.len = 20;
    cout << S1.area() << endl;
    cout << S2.area() << endl;

    return 0;
}