//managing class objects trough pointers


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
   
   cout<<"volume: "<<cylinder1.volume()<<endl;

//managing a stack throught he pointer object
cylinder* p_cylinder1=&cylinder1;
cout<<"volume: "<<(*p_cylinder1).volume()<<endl;
//instead of dereferencing we can do this
cout<<"volume: "<<p_cylinder1->volume()<<endl;
cylinder*p_cylinder2= new cylinder(100,2);//this will create the cylinder two  object int he heap of the memory
cout<<"volume(p_cylinder2): "<<p_cylinder2->volume()<<endl;
cout<<"get_base_radius(p_cylinder2): "<<p_cylinder2->get_base_radius()<<endl;
delete p_cylinder2;
p_cylinder2= nullptr;
    
    return 0;
}



