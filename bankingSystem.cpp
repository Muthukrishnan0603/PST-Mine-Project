#include<iostream>
using namespace std;
class Bank{
    public:
    string name;
    int account_no;
    float balance;
    int pin_number;
    void getdata(){
        int pin;
        cout << "Enter your name : ";
        cin >> name;
        cout << "Enter your account number : ";
        cin >> account_no;
        cout << "Enter your PIN number : ";
        cin >> pin;
        pin_number = pin;
        }
    void deposit(){
        float amount;
        cout << "Enter the amount to deposit : ";
        cin >> amount;
        balance += amount;
        cout << "Amount deposited successfully. Current balance : " << balance << endl;
    }
    void withdraw(){
        float amount;
        cout << "Enter the amount to withdraw : ";
        cin >> amount;
        if(amount > balance){
            cout << "Insufficient  Current balance : " << balance << endl;
        } else {
            balance -= amount;
            cout << "Current balance : " << balance << endl;
        }
    }
};
int main(){
    Bank b1;
    b1.getdata();
    b1.deposit();
    b1.withdraw();
    return 0;
}