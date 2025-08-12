#include<iostream>
using namespace std;
class demo{
    int a,b;
    public:
    demo(){
        a=0;
        b=0;
    }
    void getinto(){
        cout<<"Enter value of a:"<<endl;
        cin>>a;
        cout<<"Enter value of b:"<<endl;
        cin>>b;
    }
    void putdata(){
        cout<<"The value of a is:"<<a<<endl;
    }
    void operator +=(demo c){
    a=c.a+c.b;
}
};
int main(){
    demo A1,A2;
    
    A2.getinto();
    A1+=A2;
    A1.putdata();
    return 0;
}
