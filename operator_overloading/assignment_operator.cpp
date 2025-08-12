#include<iostream>
using namespace std;
class Demo{
    int a;
    public:
    Demo() {
        a=0;
    }
    Demo(int x){
        a=x;
    }
    void putdata() {
        cout<<"The value of a is:"<<a<<endl;
    }
    void operator=(Demo obj){
        a=obj.a;
      
    }

};
int main() {
    Demo D1(10),D2;
    D2=D1;
    D2.putdata(); // This will display "The value of a is: 10"
    
    return 0;
}