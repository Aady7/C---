//default constructors
#include<iostream>
using namespace std;
const double pi{3.1415926535897932384626433832795};
class cylinder{
    public:
    //constructors
        cylinder() = default;
        cylinder(double rad_param, double height_para ){
            base_radius=rad_param;
            height=height_para;

        }
        //funtions
        double volume(){
            return pi*base_radius*base_radius*height;
        }
        //member variables
    private:
         double base_radius{2};
         double height{4};   


};

int main(){
    cylinder cylinder1;
    cout<<"volume 1: "<<cylinder1.volume()<<endl;
    cylinder cylinder2(34,54);
    cout<<"volume of the second cylinder is "<<cylinder2.volume()<<endl;

    
    
    return 0;
}
