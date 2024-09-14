#include <iostream>
#include <string>

using namespace std;
class Vechile {
    public:
    string company ="Ford";
    void type(){
        cout<<"Mustang"<<endl;
    }
};



class Specs {
    public:
    string mileage ="8kmpl";
    void colour(){
        cout<<"Grey"<<endl;

    }
};
class Car: public Vechile, public Specs {
    public:
    string seater = "4 seater";
};
int main(){
    Car f2;
    f2.colour();
    cout<<f2.company<<" ";
    f2.type();
    cout<<"("<<f2.seater<<")"<<endl<<"MILEAGE:"<<f2.mileage<<endl;
}
