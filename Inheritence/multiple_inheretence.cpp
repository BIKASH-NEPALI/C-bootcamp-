#include<iostream>
#include<string>
using namespace std;

class Engineer{
public:
string specialization;
void work(){
    cout<<"I  have specialization in"<<specialization<<endl;
}
};
class Youtuber{
public:
int suscribers;
void contentcreator() {
    cout<<"I have "<<suscribers<<"in my account"<<endl;
}
};
class HeroEngineer: public Engineer, public Youtuber{
 public:
 string name;
 HeroEngineer(string  specialization, int susbribers, string name)
 {
 this->specialization=specialization;
 this->suscribers=susbribers;
 this->name=name;
 }
  void showcase(){
    cout<<"Hello everyone my name is:"<<name<<endl;
    cout<<"I have specialization in my "<<specialization<<endl;
    cout<<"also i have "<<suscribers<<"in my youtube"<<endl;
  }
};

int main() {
HeroEngineer H1("Computer_Engineering", 25, "Bikash");
H1.contentcreator();
H1.showcase();


};