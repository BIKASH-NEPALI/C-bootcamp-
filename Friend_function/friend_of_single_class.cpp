#include<iostream>
#include<string>
using namespace std;
class Box{
    private:
    int length;
    int breadth;
    int height;
    public:
    Box(int l, int b, int h)
    {length=l;
        breadth=b;
        height=h;


    }
    friend void showArea(Box b);

    
};

int main() 
{

    Box a(10,20,30);

    showArea(  a);
 return 0;
};
void showArea(Box obj){ // this function is not a member of class but define as a friend of class
    int area;
    area=obj.breadth*obj.height*obj.length;
    cout<<"The area of box is:"<<area<<endl;

}