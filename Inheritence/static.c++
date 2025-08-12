#include<iostream>
#include<string>
using namespace std;

class Customer
{
string name;
int account_number;
int balance;
public:
static int total_customer;


Customer(string name, int account_number, int balance)
{
    this->name = name;
    this->account_number = account_number;
    this->balance = balance;
    total_customer++;
}
    
        void display()
    {
    cout<<name<<" "<<account_number<<" "<<balance<<" "<<total_customer<<endl;
    }
    void display_total()
    {total_customer<<endl;

    }

    
        
};
{
     cout<<total_customer<<endl;
}
  int  Customer::total_customer = 0;

int main()
{
    Customer A1("Prabin Bhatt",  123321, 20000);
    Customer A2(" Bikash Nepali", 432516, 10000);
    Customer A3("Ram Dhami", 234151, 100000);
    Customer::total_customer = 5;
    A1.display_total();

    
    
    
};
