//setters and getters 
#include<iostream>
const double pi{3.1415926535897932384626433832795};

using namespace std;
class cylinder{
    private:
    //member funtions
      double base_radius{4};
      double height{3};
    public:
      //constructors 
      cylinder()=default;
      cylinder(double rad_param, double height_param){
        base_radius=rad_param;
        height=height_param;
      }
    //funtions
    double volume(){
        return pi*base_radius*base_radius*height;
    }
    //getters
    double get_base_radius(){
        return base_radius;
    }
    double get_height(){
        return height;
    }
    //setters
    void set_base_radius(double rad_param){
        base_radius=rad_param;
    }
    void set_height(double height_param){
        height=height_param;
    }


};

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
