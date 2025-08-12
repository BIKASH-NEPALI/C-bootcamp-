// searching elemts in array 
#include<iostream>
#include<string>
using namespace std;

int main() 
{
    int arr[10]={12,13,14,15,16};
    int x;
    cout<<"Enter the target element:"<<endl;
    cin>>x;
    for(int i=0; i<10;i++){
        if(arr[i]==x){
          cout<<"Element is found in "<<i<<" position"<<endl;

          break;
        }
        else
        cout<<"Elemts not found"<<endl;
        
    }
    
 return 0;
};