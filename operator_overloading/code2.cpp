#include<iostream>
using namespace std;
class Demo {
    int a; 
    int b;
    public:
    Demo() {
        a=0;
        b=0;

    }
    void getdata(int x, int y) {
        a = x;
        b = y;
    }
    void putdata() {
        cout << "The value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
    }
    Demo operator-(Demo obj){
        Demo temp;
        temp.a=a-obj.a;
        temp.b=b-obj.b;
        return temp;

    }

    
};
int main() {
    Demo D1,D2,D3;
    D1.getdata(40, 50);
    D2.getdata(10, 40);
    D3=D1-D2;
    D3.putdata();
    return 0;
}