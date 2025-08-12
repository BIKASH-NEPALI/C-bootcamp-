#include<iostream>
using namespace std;
int main() {
     int size=10;
    int arr[size];
    for(int i=0; i<10; i++) // taking input and output in array
    { // code 
        cout<<"This is "<<i<<"elemts of array"<<endl;
        cout<<&arr[i]<<endl; // store in contigous memory location 
   
cout<<sizeof(arr[10]);
    }
   
}
    