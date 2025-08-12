#include<iostream>
#include<string>
using namespace std;
class universtiy{
public:
 universtiy(){
    cout<<"Hi i am a constructor"<<endl; // non parameterized constructore

 }
 universtiy(string l, string c, float r){
    loacation  =l;
    country =c;
    ranking =r;

 }
string loacation;
string country;
float ranking;
private:
float revunation;

};
int main() {
    universtiy V1("chicago", "America", 205);
    cout<<"the ranking of university is "<<V1.ranking<<endl;
     


    return 0;
};  