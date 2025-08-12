#include<iostream>
#include<string>
using namespace std;
class Cricketer{
  
string name;
 int run;
public:
Cricketer(string n, int r){
    name=n;
    run=r;
    


}
void function() {
        cout<<"The name of cricketer is:"<<name<<endl;
    }


};
int main() {
    Cricketer C1("Virath kohli ", 200);
    Cricketer C2("ms dhoni", 120);
    Cricketer *ptr;
    ptr=&C1;
   ptr->function();


};
