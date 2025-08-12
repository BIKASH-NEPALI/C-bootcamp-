#include<iostream>
using namespace std;
class demo{
    int a;
    public:
    void getinto(){
        cout<<"Enter value of a:"<<endl;
        cin>>a;
    }
    void putdata(){
        cout<<"The value of a is:"<<a<<endl;
    }
    void operator=(demo obj){
    a=obj.a;
}
};
int main(){
    demo A1,A2;
    
    A2.getinto();
    A1=A2;
    A1.putdata();
    return 0;
}
