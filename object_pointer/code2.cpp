#include<iostream>
#include<string>
using namespace std;
class Demo{
string name;
string account;
public:
Demo(string name, string account) {
    this->account;
    this->name;
cout<<"This constructore works now:"<<endl;

}
void display() {
    cout<<"This is a funtion ";
}
};
int main() {

Demo  *pointer= new Demo("Bikash","situation");
pointer->display();
delete pointer;
};