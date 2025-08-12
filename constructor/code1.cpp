#include<iostream>
#include<string>
using namespace std;
class customer{
    private:
    string name;
    int account_number;
    char balance;
    
   public:
   void getinfo(){
    cout<<"Enter the name of customer:"<<endl;
    
    
   }
   customer(){
    cout<<"This is deafult constructor "<<endl;
    cout<<"This is Bikash nepali"<<endl;
    
   }
   
};
int main() {
    customer c1;

   
    return 0;
    

};