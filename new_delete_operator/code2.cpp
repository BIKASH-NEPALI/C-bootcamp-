#include<iostream>
using namespace std;
int main() {
    int i;
    int n;
    cout<<"Enter total numbers of integers:"<<endl;
    cin>>n;
    int *ptr=new int[20];
    cout<<"Enter elements:"<<endl;
    for( i=0; i<n;i++){
        cin>>*(ptr+i);

    }
    int sum=0;
    for( i=0;i<n;i++){
        sum+=*(ptr+i);
    }
    cout<<"The value of total integers is"<<sum<<endl;
    delete [] ptr;
    return 0;
  
}