#include<iostream>
#include<string>

using namespace std;
class Human{
    private:
    

    string name;
    protected:
    string age;
    public:
    string location;
     void function() { // all can be accessed within class
        name="Bikash";
        age="24";
        location="Nepal";
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;      
        cout<<"Location: "<<location<<endl;}
    };
   
int main() {
    Human person;
   // can't acces person.age="24";
   person.function();
}