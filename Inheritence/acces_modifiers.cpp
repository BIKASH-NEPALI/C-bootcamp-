#include<iostream>
using namespace std;
class Human{
    private:// not access outside the class
    int a;
    public:// acces any where
    int b;
    protected:// not acces in external code, only in class and derived class
    int c;
};
int main() {
Human Bikash;
   Bikash.b=10; 
  //  Bikash.c=20; data is protected;
   cout<<"the vaule of b is :"<<Bikash.b<<endl; 
  //  cout<<"the vaule of  c is :"<<Bikash.c<<endl; 
   
};