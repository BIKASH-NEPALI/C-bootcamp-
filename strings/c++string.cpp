#include<iostream>
#include<string>
using namespace std;
int main() {
string str1,str2,str3;
str1="Bikash";
str2="Nepali";
cout<<str1<<" "<<str2<<endl;
cout<<str1+ str2<<endl;
cout<<str1[3];
cout<<"Enter full name:";
getline(cin, str3);// getline is used to read a line
cout<<"your full name is:"<<str3<<endl;
    return 0;
};