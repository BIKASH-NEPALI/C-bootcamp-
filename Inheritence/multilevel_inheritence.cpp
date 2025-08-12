#include<iostream>
#include<string>
using namespace std;
class Person{
protected:
string name;
public:
void introduce() {
    cout<<"hell my name is bikash"<<endl<<endl;
}
};
class  Employee: public Person
{
  protected:
  int salary;
  public:
  void monthly_salary() {
    cout<<"My montly salary is "<<salary<<endl;
  }
};
class Manager:public Employee {
 public:
 string department;
 public:
 Manager(string name, int salary, string department){
    this->name=name;
    this->salary=salary;
    this->department=department;

 }
 void work(){
    cout<<"I am working here in "<<department<<endl;
 }
};
int main(){
    Manager M1("Bikash",2500, "human_resources");
    M1.introduce();
    M1.work();
    M1.monthly_salary();

    

};