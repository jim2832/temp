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

        void SetData(string na, int lv, int hpcur, int hpmax){
            if(hpcur > hpmax){
                cout << "HpCur error" << endl;
                return;
            }
            name = na;
            level = lv;
            HpCur = hpcur;
            HpMax = hpmax;
        }

        void Attack(Pokemon &target){
            if(HpCur <= 0){
                cout << name << " can't attatck" << endl;
                return;
            }
            if(target.HpCur <= 0){
                cout << "The target " << target.name
                << "can't be attatcked" << endl;
                return;
            }
            cout << name << " attatcked " 
            << target.name << " for " << level << " points " << endl;
            target.Defense(level);

        }

        void Defense(int n){
            HpCur -= n;
            if(HpCur <= 0){
                cout << name << " lose his power" << endl;
            }
        }

        void Cure(){
            cout << name << "restore health totally" << endl;
            HpCur = HpMax;
        }
    
    private:
        string name;
        int level;
        int HpCur;
        int HpMax;
};

int main(void){
    Pokemon p1, p2;
    p1.SetData("Pika", 10, 15, 15);
    p2.SetData("Dragon", 15, 25, 25);

    p1.Attack(p2);
    p2.Attack(p1);

    p1.Show();
    p2.Show();

    return 0;
}