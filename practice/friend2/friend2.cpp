#include <iostream>
#include <string>
using namespace std;

class Pokemon{
    public:
        //constructor
        Pokemon(){
            name = "No name";
            level = 1;
            HpCur = 0;
            HpMax = 0;
            tools = new string[100]; //dynamic allcation
            toolsNum = 0;
        }

        //overload
        Pokemon(string na, int lv, int hpcur, int hpmax){
            SetData(na, lv, hpcur, hpmax);
            tools = new string[100]; //dynamic allcation
        }

        //destructor
        ~Pokemon(){
            cout << name << "has returned to the nature" << endl;
            delete[] tools;
        }

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

        friend void PokemonCenter(Pokemon &pk); //friend
        friend class pokemon_center; //friend class
    
    private:
        string name;
        int level;
        int HpCur;
        int HpMax;
        string *tools;
        int toolsNum;
};

class pokemon_center{
    public:
        pokemon_center(string na){
            Name = na;
        }

        void Cure(Pokemon &pk){
            pk.HpCur = pk.HpMax;
            cout << pk.name << "has recovered in the" << Name << "center" << endl;
        }
    private:
        string Name;
};

//friend function
void PokemonCenter(Pokemon &pk){
    pk.HpCur = pk.HpMax;
    cout << pk.name << "has recovered in the center" << endl;
}

int main(void){
    Pokemon *p0 = new Pokemon("Turtle", 18, 30, 30); //dynamic allcation
    p0 -> Show();
    delete p0;

    Pokemon p1("Pika", 10, 15, 15),
            p2("Dragon", 15, 25, 25);
    //p1.SetData("Pika", 10, 15, 15);
    //p2.SetData("Dragon", 15, 25, 25);

    p1.Attack(p2);
    p2.Attack(p1);

    p1.Show();
    p2.Show();

    PokemonCenter(p1);
    PokemonCenter(p2);

    return 0;
}