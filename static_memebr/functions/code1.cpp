#include<iostream>
#include<string>
using namespace std;
class Customer {
    private:
    
string name;
string account_number;
int balance;
static  int total_customers; // declaring static variable
public:
Customer(string n ,string a, int b){
    name=n;
    account_number=a;
    balance=b;
    total_customers++;
     
}
void displayaccount_info() {
    cout<<total_customers<<endl;
}
 void displayInfo() {
    cout << "Customer Name: " << name << ", Account Number: " << account_number << ", Balance: " << balance << endl;
    
}
};
int Customer::total_customers=0; // initializng 
int main() {

    Customer A1("Bikash","1235",1000);
    Customer A2("don","4567",4000);
    A1.displayaccount_info();
    Customer  A3("sita","7890",2000);
    A2.displayaccount_info();

    A1.displayInfo();
    A3.displayInfo();
    
    return 0;
};