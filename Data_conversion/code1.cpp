// Basic to class type
#include<iostream>
#include<string>
using namespace std;
class Demo{
  int num;
  public:
  Demo(int n){
    num=n;
  }
  void function() {
    cout<<"The name of class is "<<num<<endl;

  }
};
int main() {
    Demo obj=39;
    obj.function();


};