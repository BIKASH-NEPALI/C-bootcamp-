#include<iostream>
using namespace std;
class Book{
public:
Book(){
    cout<<"Constructor is called"<<endl;
}
~Book(){
    cout<<"Destructor is called"<<endl;
}

};
int main() 

{
    {
    Book B1;

}
    return 0;
}