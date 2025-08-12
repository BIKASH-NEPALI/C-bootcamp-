#include<iostream>
#include<string>
using namespace std;
class Time{
    private:
    int hours;
    int minutes;
    public:
    Time(int t){
        hours=t/60;
        minutes=t%60;
    }
   void display(){
    cout<<"The time is "<<hours<<"hours and"<<minutes<<" minutes"<<endl;
   }

};
int main() 
{
    Time t1(120);
    t1.display();
 return 0;
};