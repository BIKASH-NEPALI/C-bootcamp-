#include<iostream>
#include<string>
using namespace std;
class Human{
public: 
string name;

};
class Engineer: public Human{
public:
string specialization;

};
class Youtuber:public Human{
public:
long suscribers;

};
class CodeTeacher: protected Engineer, protected Youtuber{
public:
long salary;
CodeTeacher(string name, string specialization, long  suscribers, long salary){
    this->name=name;
    this->specialization=specialization;

    this->suscribers=suscribers;
    this->salary=salary;
}
};
int main() {

};