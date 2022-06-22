#include <iostream>
#include <string>
using namespace std;

class eCash{
    public:
        //constructor
        eCash(){
            money = 0;
        }

        void store(int m){
            money += m;
        }

        void pay(int m){
            money -= m;
        }

        void display(){
            cout << "eCash: 您尚有" << money << "元" << endl;
        }

        int GetMoney(){
            return money;
        }

    private:
        int money;
};

int main(void){
    char input;
    int m;
    eCash wallet; //make object

    cout << "=== 歡迎使用eCash ===" << endl;
    cout << endl;
    while(1){
        cout << "您好，請選擇項目:" << endl;
        cout << "s: 儲值" << endl;
        cout << "p: 消費" << endl;
        cout << "d: 顯示餘額" << endl;
        cout << "q: 離開" << endl;

        cin >> input;

        switch (input){

        //case s
        case 's':

            cout << "請輸入儲存金額:" << endl;
            cin >> m;
            if(m < 0){
                cout << "請輸入大於0的金額" << endl;
                m = 0;
                break;
            }
            wallet.store(m);
            cout << "eCash: 您存了" << m << "元" << endl;
            break;

        //case p
        case 'p':
            cout << "請輸入消費金額:" << endl;
            cin >> m;
            if(m < 0){
                cout << "eCash: 請輸入大於0的金額" << endl;
                m = 0;
                break;
            }
            if(wallet.GetMoney() -m < 0){
                cout << "eCash: 您的錢不夠" << endl;
                break;
            }
            wallet.pay(m);
            cout << "eCash: 您花了" << m << "元" << endl;
            break;

        //case d
        case 'd':
            wallet.display();
            break;

        //case q
        case 'q':
            cout << "謝謝,ByeBye!" << endl;
            return 0;
            break;
        
        default:
            cout << "請輸入有效的指令！" << endl;
            break;
        }
        cout << "請按Enter鍵繼續...";
        getchar();
        fgetc(stdin);
        system("clear");
    }

    return 0;
}