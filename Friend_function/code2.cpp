#include<iostream>
#include<string>
using namespace std;
class Rectangle{
    private:
    int length;
    int breadth;
    public:
    Rectangle(int l, int b){
        length=l;
        breadth=b;

    }
    friend void calculateArea(Rectangle );
   
};
void calculateArea(Rectangle a) {
    cout<<"Area of Rectangle is:"<<a.length * a.breadth<<endl;
}
int main() {
    Rectangle A1(10,20);
    calculateArea(A1);
    return 0;
}