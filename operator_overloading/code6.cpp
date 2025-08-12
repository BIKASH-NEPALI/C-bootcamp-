#include<iostream>
using namespace std;
class Operator{
int real; 
int img;
public:
  Operator() {
    real=0;
    img=0;
  }
 Operator(int r, int i){
    real=r;
    img=i;
 }
 void output(){
    cout<<"The real part is "<<real<<"and imaginary part is"<<img<<"i"<<endl;
 }
 Operator operator+(Operator obj){
    Operator temp;
    temp.real=real+obj.real;
    temp.img=img+obj.img;
    return temp;
 }
};
int main() {
    Operator c1(12,3), c2(1,4),c3;
    c3=c1+c2;
    c3.output();
}
