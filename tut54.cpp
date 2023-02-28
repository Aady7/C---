//classe
//help us design our own types
#include<iostream>
using namespace std;
const double pi{3.1415926535897932384626433832795};

class cylinder{
    public:
    //funtions (methods )
       double volume(){
        return pi*base_radius*base_radius*height;
       }

public:
    //member variables
    double base_radius{1};
    double height{2};
    

    

};
int main(){
    cylinder cylinder1;//variables are callled objects
    cout<<"volume of the cylinder"<<cylinder1.volume()<<endl;
    cout<<"base_radius: "<<cylinder1.base_radius<<endl;
    cout<<"height: "<<cylinder1.height<<endl;
    cylinder1.base_radius = 45;
    cylinder1.height = 34;
    cout<<"volume of the cylinder "<<cylinder1.volume()<<endl;
    return 0;

}

//member can't be references
//class funtions let us to do things
//class methods have acces to member variable may it be public or private
// members of the classes are not accessible outside of the class definations