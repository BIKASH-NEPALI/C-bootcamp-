#include<iostream>
#include<string>
using namespace std;
class Customer {
public:
    string name;
    int  account_number;
    float balance;
    Customer() {
        cout<<"This is  the deafult constructor"<<endl;
        cout<<"This is Bikash Nepali"<<endl;

    } // Deafult constructor 
    Customer(string a, int b, float c){
        name=a;
        account_number=b;
        balance=c;
    } // parameterized constructor
    

};
int main() {
    Customer cs2("Bikash ",  50475, 12.40f);
    cout<<"The name of customer is "<<cs2.name<<endl;
    return 0;
};