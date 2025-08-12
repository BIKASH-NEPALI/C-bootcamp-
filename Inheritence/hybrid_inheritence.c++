#include<iostream>
#include<string>
using namespace std;
// student
//boy
//girl
// male
// female
class Student{
public:
void print(){
    cout<<"I am a student"<<endl;
}
};
class Male{
public:
void maleprint() {
    cout<<"Hello I am male"<<endl;
}
};
class Boy: public Student, public Male{
public:
void boyprint(){
    cout<<"I am a boy"<<endl;
}

};

class feMale{
public:
void femaleprint() {
    cout<<"Hello I am female"<<endl;
}
};
class girl: public Student, public feMale
{
    public:
    void girlprint() {
        cout<<"I am a girl"<<endl;
    }
};




int main() {
girl G1;
G1.girlprint();

G1.print();
};