#include<iostream>
#include<string>
using namespace std;
class Student {

string name;
public:
static int total_students;
Student(string n){
    name=n;
    total_students++;
}

void display() {
    cout<<"The  name of student  is:"<<name<<endl;
   

    }
     static void showTotal() {
        cout<<"Total number of students:"<<total_students<<endl;
}


};
int Student::total_students=0;
int main() {
    Student s1("Bikash");
    Student s2("Arjun");
    Student s3("Deepika");
    s1.display();
    s2.display();
    s3.display();
    Student::showTotal();

    return 0;
}