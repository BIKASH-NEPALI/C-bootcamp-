#include<iostream>
#include<string>
using namespace std;
class BankAccount{
    private:
    int accountNumber;
    double balance;
    friend class  AccountManager;
    public:
    BankAccount(int a, int b){
        accountNumber=a;
        balance=b;
    }
};
class AccountManager{
public:
void  showdetails( BankAccount &a){
    cout<<"Your account details:"<<a.accountNumber<<"and balance:"<<a.balance<<endl;
    

}
};
int main() 
{
    BankAccount obj(123,4500.24);
    AccountManager obj1;
    obj1.showdetails(obj);

 return 0;
};