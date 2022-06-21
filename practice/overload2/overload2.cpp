#include <iostream>
#include <string>
using namespace std;

void show(struct Person person);
void show(struct Person x);

struct Person{
    string name;
    int height;
    int weight;
};

int main(void){
    struct Person p1;
    cin >> p1.name >> p1.height >> p1.weight; //input

    return 0;
}

void show(struct Person &person){ //call by reference
    cout << "Name: " << person.name << endl;
    cout << "Height: " << person.height << endl;
    cout << "Weight: " << person.weight << endl;
}

void show(struct Person x){
    cout << "Name: " << x.name << endl;
    cout << "Height: " << x.height << endl;
    cout << "Weight: " << x.weight << endl;
}