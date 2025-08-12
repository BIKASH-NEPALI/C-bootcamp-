#include<iostream>
#include<string>
using namespace std;
class college{
    public:
    string name;
    string location;
    int established;
    inline college(string n, string l, int e):name(n), location(l), established(e){}

};
int main() {
    college c1("ABC College", "New York", 1990);
    cout<<"The name of college is "<<c1.name<<endl;

    return 0;
    };
