#include <iostream>
using namespace std;

class Account
{
private:
    double balance; // Account Balance
public:
    string name;        // Account Holder
    long accountNumber; // Account Number
    void setDetails(double bal)
    {
        balance = bal;
    }
    double getDetails()
    {
        return balance;
    }
    void displayDetails()
    {
        cout << "Details are:" << endl;
        cout << "Account Holder:" << name << endl;
        cout << "Account Number:" << accountNumber << endl;
        cout << "Account Balance:" << getDetails();
    }
};
int main()
{
    double accBal;
    Account currentAccount;
    currentAccount.getDetails();
    cout << "Please enter the details" << endl;
    cout << "Enter Name:";
    getline(cin, currentAccount.name);
    cout << "Enter Account Number:";
    cin >> currentAccount.accountNumber;
    cout << "Enter Account Balance:";
    cin >> accBal;
    currentAccount.setDetails(accBal);
    currentAccount.displayDetails();
    return 0;
}