#include<string>
#include<iostream>
using namespace std;
class Teacher {
    private:
    string name;
    string subject;
    public:
    Teacher(string a, string b) {
        name=a;
        subject=b;

    }
    ~Teacher() {
        cout<<"Destructor is called"<<endl;
    }
};
int main() {
    
    Teacher T1("Bikash", "Nepali");
    Teacher T2("Site",  "English");
    return 0;
}