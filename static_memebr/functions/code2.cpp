#include<iostream>
#include<string>
using namespace std;
class demo{
    int aa, bb;
    public:
    static int cc;
    demo(int a, int b) { // constructor
        aa=a;
        bb=b;
        cc++;
    }
    void display() {
        cout<<"aa:"<<aa<<", bb:"<<bb<<", cc:"<<cc<<endl;
    }


};
int demo::cc=0; // intializing 
int main() {
      demo A1(10,20);
        demo A2(30,40);
    A1.display();
    A2.display();
    

    return 0;
};
