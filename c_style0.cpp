#include<iostream>
#include<cstring>
using namespace std;
int main() {
  char first_name[20];
  char last_name[20];
  char full_name[20];
  cout<<"Enter your first name:"<<endl;
cin>>first_name;
  cout<<"Enter your last name:"<<endl;
cin>>last_name;
cout<<"Your last name has "<<strlen(last_name)<<"characters"<<endl;

  cout<<"Enter your full name:"<<endl;
  cin>>full_name;
    return 0;

};