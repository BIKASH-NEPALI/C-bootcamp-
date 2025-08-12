#include<iostream>
#include<string>
using namespace std;
class Car {
    public:
    string brand;
    string model;
    int launc_year;
    Car() {
        cout<<"This is a deafult constructor"<<endl;
    }
    Car(string brand, string model, int launc_year){
         this->brand=brand;
       this-> model=model;
       this-> launc_year=launc_year;

    }
      private:
    float price;

  
};
int main() {
Car c1("Toyota", "hyper", 2022);
cout<<"The car of brand "<<c1.brand<<" and model "<<c1.model<<" was launched in year "<<c1.launc_year<<endl;
    return 0;
}