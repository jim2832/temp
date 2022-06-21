#include <iostream>
#include <string>
using namespace std;

class Pokemon{
    public:
        void Show(){
            cout << "Name: " << name << endl;
            cout << "Level: " << level << endl;
            cout << "HP: " << HpCur << "/" << HpMax << endl;
        }

        void Attack(Pokemon &target);
        void Defense(int n);
        void Cure();

        string name;
        int level;
        int HpCur;
        int HpMax;
};

int main(void){
    Pokemon p1, p2;


    return 0;
}