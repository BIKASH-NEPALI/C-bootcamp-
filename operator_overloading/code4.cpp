#include<iostream>
using namespace std;
class Math {
float  x;
float y;
public:
 Math() {
    x=0;
    y=0;

 }
  Math(float a , float  b){
    x=a;
    y=b;
  }
  void showdata() {
    cout<<"The value of x is:"<<x<<endl;
    cout<<"The value of y is:"<<y<<endl;
  }
  Math operator+(Math obj){
    Math temp;
    temp.x=x+obj.x;
    temp.y=y+obj.y;
    return temp;
  }

};
int main() {
    Math M1(0.2, 0.3);
    Math M2(0.9, 0.1);
    Math M3;
    M3=M1+M2; 
    M3.showdata(); // This line will cause an error because operator+ is not defined
    return 0;
};