#include<iostream>
#include<string>
using namespace std;
class Account{

 string accountHolderName;
 int balance;
 public:
 Account(string name, int bal){
    accountHolderName=name;
    balance=bal;
 }
 friend void displayInfo(Account B);
};
void displayInfo(Account B){
    cout<<"Account Holder Name:"<<B.accountHolderName<<endl;   
     cout<<"Balance:"<<B.balance<<endl;

}
int main() {
    Account A1("Bikash", 5000);
    Account A2("Arjun", 3000);
    Account A3("Deepika", 7000);
    displayInfo(A1);
    displayInfo(A2);
    displayInfo(A3);
    return 0;
}