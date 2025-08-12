#include<iostream>
using namespace std;
inline int square(int x){
        return x * x;
    };
    inline int cube(int x){
        return x * x * x;
    };

int main() {
  cout<< "Square of 5: " << square(5) << endl; // Output: 25
  cout<< "Cube of 3: " << cube(3) << endl; //

}