#include<iostream>
using namespace std;
class  Rectangle;
class Circle {
    int radius;
    public:
    Circle (int r) {
        radius = r;
    }
    int area=3.14 * radius * radius; // area of circle
    friend void CompareArea(Rectangle, Circle);

};
class Rectangle{
    int length;
    int breadth;
    public:
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }
    int area = length * breadth; // area of rectangle
    friend void CompareArea(Rectangle, Circle);
    

};
void CompareArea(Rectangle r, Circle c){
    if(r.area>c.area) 
        cout<<"Area of Rectangle is greater than Circle"<<endl;
        
    else 
    cout<<"Area of Circle is greater than Rectangle"<<endl;

}
int main() {
    Rectangle R1(10, 29);
    Circle C1(4);
    CompareArea(R1,C1);
return 0;
};