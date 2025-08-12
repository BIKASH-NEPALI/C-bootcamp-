#include<iostream>
#include<string>
using namespace std;
class Human{
    protected:
    int age;
    string name;
    public:
    void work() {
        cout<<"I am working here"<<endl;
    }
    Human(){
        cout<<"Hello student"<<endl;
    }
};
class student: public Human{
    int roll_number;
    int fees;
    public:
    student(string name, int age, int roll_number, int fees){
        this->name=name;
        this->age=age;
        this->roll_number=roll_number;
        this->fees=fees;
        
    }
    student(){
        cout<<"I am a deafult constructor"<<endl;
    }
};



int main() {
    student A1("Bikash", 23, 13, 2500);
    student A2;
A1.work();



};