// constructor overloading
#include<iostream>
#include<string>
using namespace std;
class university{
    public:
    string name;
    string affiliated_college;
    int established;
    int ranking;
    university() { // deafult constructor
        name="farwestern university";
        affiliated_college="rupandehi college";
        established=2014;
        ranking =34;

    }
   
    university(string n, string ac, int e) {// parameterized constructor
        name = n;
        affiliated_college = ac;
        established = e;
        ranking =50;
       
    }
    university(string name, string affiliated_college, int established, int ranking)  {// using this pointer
        this->name = name;
        this->affiliated_college = affiliated_college;
        this->established = established;
        this->ranking = ranking;

    }
};
int main() {
    university u1;
    cout<<"The name of university is "<<u1.name<<endl;
    university u2("Tribhuvan University", "Kathmandu College", 1959 );
    cout<<"The name of university is"<<u2.name<<endl;
    cout<<"The ranking of university is "<<u2.ranking<<endl;
    university u3("Pokhara University", "Pokhara College", 1997, 5);
    cout<<"The name of university is "<<u3.name<<endl;

    return 0;

};