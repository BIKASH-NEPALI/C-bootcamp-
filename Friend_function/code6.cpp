#include<iostream>
using namespace std;
class B; // prior definition
class A{
int a;
public:
void input() {
    cout<<"enter the value of:"<<endl;
    cin>>a;
}
friend void max(A,B);

};
class B {
    int b;
    public:
    void input() {
    cout<<"enter the value of:"<<endl;
    cin>>b;
   

}
 friend void max(A,B);
};

int main() {

}