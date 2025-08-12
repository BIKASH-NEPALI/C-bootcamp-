#include<iostream>
#include<string>
using namespace std;
class Time {
    private:
    int hours;
    int minutes;
    public:
    Time(){
        hours=0;
        minutes=0;
    }
    void getdata() {
        cout<<"Enter hours and minutes:"<<endl;
        cin>>hours>>minutes;

    }
    void showdata() {
        cout<<"Time is:" <<hours <<" hours and "<<minutes<<"minutes"<<endl;
    }
    void calculate(Time, Time);


};
void Time::calculate(Time a, Time b){
    minutes=(a.minutes+b.minutes)%60;
     hours=a.hours+b.hours;
    hours=hours+(a.minutes+b.minutes)/60;
}
int main() {
    Time T1,T2,T3;
    T1.getdata();
    T2.getdata();
T3.calculate(T1,T2);
T3.showdata();
    return 0;
}