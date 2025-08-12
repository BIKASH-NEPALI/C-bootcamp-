#include<iostream>
#include<string>
using namespace std;
class Teacher {
    public:
    string name;
    string subject;
    int experience;
    Teacher(string n, string s, int ex) { // Default constructor
        name = n;
        subject = s;
        experience = ex;
       
      
    }
void display(){
     cout << "Teacher's name: " << name << ", Subject: " << subject << ", Experience: " << experience << " years" << endl;
};

};

int main() {
    Teacher t1("Bikash", "Mathematics", 5); // Parameterized constructor
     t1.display();
    Teacher t2(t1);
    t2.display();
    return 0;
};