#include<iostream>
#include<string>
using namespace std;
class Registration {
    private:
    string name;
    int grade;
    static int total_students;
    public:
    Registration(string n, int g){
        name=n;
        grade=g;
        total_students ++;

    }
    Registration(){
        total_students++;
    }
    static void showTotalStudents() {
        cout<<"The number of students registered is:"<<total_students<<endl; 

    }


    

};
int Registration::total_students=0;
int main() {
    Registration student1("thor",12);
    Registration student2("captain",10);
    Registration student3("tony stark",8);
    Registration student4;
    Registration student5;
    Registration::showTotalStudents();


    return 0;
}