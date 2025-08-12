#include<iostream>
#include<string>
using namespace std;
class Marks;
class Student {
    string name;
    int rollNumber;
    public:
    Student(string n, int r){
    name=n;
    rollNumber=r;
    }
    friend void displayResult(Student, Marks);


    
};
class Marks{
int maths;
int science;
public:
Marks(int m, int s){
    maths=m;
    science=s;
}
    friend void displayResult(Student, Marks);


};
void displayResult(Student obj1, Marks obj2){
    cout<<"The name of student is:"<<obj1.name<<endl;
    cout<<"The roll number of student is:"<<obj1.rollNumber<<endl;
cout<<"Total marks in math :"<<obj2.maths<<endl;
cout<<"Total marks in science:"<<obj2.science<<endl;


}
int main() 
{
    Student a("Bikash",40);
    Marks b(80, 90);
    displayResult(a,b);
 return 0;
};