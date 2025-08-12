#include<iostream>
#include<string>
using namespace std;
class B;
class A{
    int a;
    public:
    void input()
    {
        cout<<"Enter a numberr:"<<endl;
        cin>>a;
    }
    friend void max(A,B);
};
class B{
    int b;
    public:
    void input() {
        cout<<"Enter a number:"<<endl;
        cin>>b;

    }
    friend void max(A,B);
};
 void max(A x, B y){
    if(x.a>y.b) {
        cout<<"a is greater than b"<<endl;
    }
    else 
    cout<<"b is greater than a"<<endl;
 }
 int main() {
    A obj1;
    B obj2;
    obj1.input();
    obj2.input();
    max(obj1, obj2);
    return 0;
 }