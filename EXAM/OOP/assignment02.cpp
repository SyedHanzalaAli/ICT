#include <iostream>
using namespace std;

class  BankAccount {
    string accno;
    double balance;
    
public:
    
    BankAccount(string accno){
        this->accno = accno;
        balance = 0;
    }
    
    void deposit(double amount){
        balance += amount;
    }
    
    void withdraw(double amount){
        if(balance > amount){
            balance -= amount;
        }else{
            cout << "insufficient Balance";
        }
    }
    
    void checkBalance(){
        cout << "current balance :" << balance << endl;
    }
};

int main() {
    string Account = "PK1905";
    double amount =10000;
    
    BankAccount acc(Account);
    acc.deposit(amount);
    acc.withdraw(5000);
    acc.checkBalance();
    
    return 0;
}