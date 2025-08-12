#include<iostream>
using namespace std;
class Student{
string name;
int rollNumber;
public:
Student(string name, int rollNumber){
    this->name=name;
    this->rollNumber=rollNumber;
    cout<<"Object is created "<<endl;
}
~Student() {
    cout<<"object is destroyed"<<endl;
}
};
int main() {
Student S1("Bikash", 101);
Student S2("Arjun", 102);

    return 0;
};