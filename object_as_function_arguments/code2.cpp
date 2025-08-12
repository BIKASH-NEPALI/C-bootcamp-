#include<iostream>
using namespace std;
class Rectangle {
    private: 
    int length;
    int width;
    public:
    void setDimensions(){
        cout<<"Enter lenth and width of the rectangle:";

    }

};
void calculateArea(Rectangle a){
    int area=a.length*a.width;
    cout<<"Area of Rectangle is:"<<area<<endl;

}
int main() {
    Rectangle A1;
    A1.setDimensions();
    A1.calculateArea(A1);

    Rectangle A2;
    A2.setDimensions();
    calculateArea(A2);


    return 0;
};