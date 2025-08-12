#include<iostream>
using namespace std;
class Demo {
    int a; 
    public:
    void getdata(int x){
        a = x;

    }
    void putdata() {
        cout << "The value of a is: " << a << endl;
    }
    void   operator++() {
         a=a+1;

    }
};
int main() {
    Demo D1;
    D1.getdata(10);
    cout << "Before increment: ";
    D1.operator++();
    D1.putdata();
}