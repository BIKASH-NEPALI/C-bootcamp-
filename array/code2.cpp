#include<iostream>
#include<string>
using namespace std;

int main() 
{
    int sum=0;

  int array[10]={1,2,4,5,6,7,8,9,10,20};
  
  for(int i=0; i<11;i++)
   {
    sum+=array[i];
    
     

  }
  cout<<"The sum of all elemtnts is "<<sum<<endl;
   return 0;
};