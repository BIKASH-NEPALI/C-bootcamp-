#include<iostream>
using namespace std;
int main(){
    int *ptr;
    ptr=new int;
    *ptr=33;
    cout<<"The value is:"<<*ptr<<endl;
   delete ptr;
    return 0;
}