#include<string>
#include<iostream>
using namespace std;
 
    class Human{
        public:
        string name;
        int age, wieght;


    };
    class Student: public Human
     {
        int roll, fees;

    };


int main() {
    Student s1;
    s1.name="bikash";
    cout<<"Name: "<<s1.name<<endl;
    return 0;
}