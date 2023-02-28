#include<iostream>

#include "cylinder.h"
using namespace std;

int main(){
    cylinder cylinder1(2,4);
   // cout<<"base_radius of cylinder 1 "<<cylinder1.base_radius();
   //this will give an error as the base_radius is under private parts of the class
   //to get the base_radius we can  use getter funtion
   cout<<"base_radius of cylinder 1: "<<cylinder1.get_base_radius()<<endl;
   cout<<"volume: "<<cylinder1.volume()<<endl;
   cylinder1.set_base_radius(20);
   cout<<"new volume"<<cylinder1.volume()<<endl;

    
    return 0;
}
