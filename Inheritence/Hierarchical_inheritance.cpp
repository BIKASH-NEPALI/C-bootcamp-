#include<iostream>
using namespace std;
class Human{
protected:
string name;
int age;
public:
 Human(){
    cout<<"this is a constructor "<<endl;
 }

};
class person: public Human{
    protected:
    int salary;
public:
  
};
int main() {
    return 0;

};