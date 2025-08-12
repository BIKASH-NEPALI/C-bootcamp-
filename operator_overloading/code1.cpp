#include<iostream>
using namespace std;
class Demo{
 int a;
 public:
 Demo() {
    a=0;
 }
 void getdata(int x){
    a=x;
 }
 void putdata() {  
    cout<<"The value of a is:"<<a<<endl;
 }

 Demo operator*(Demo second){
    Demo last;
    last.a=a*second.a;
    return last;
 }
};
int main() {
    Demo D1, D2, D3;

    D1.getdata(10);
    D2.getdata(20);
    D3=D1*D2;
    D3.putdata();
    return 0;
}