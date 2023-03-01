#include "constants.h"
class cylinder{
    private:
    //member funtions
      double base_radius{4};
      double height{3};
    public:
      //constructors 
      cylinder()=default;
      
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

    cylinder(double rad_param, double height_param);
};
