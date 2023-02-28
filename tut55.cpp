//constructors
// special kind of methods that is called when an instance of the a class is created
// no return type
// same name as the class
// can have parameters can also have empty parameter list
////usully used to intialise memberc variables
#include <iostream>
using namespace std;
const double pi{3.1415926535897932384626433832795};

class cylinder
{
public:
    // constructors
    cylinder()
    { // when you don't have any constructor the compiler creates a default constructor that is a null constructor
        base_radius = 4;
        height = 3;
    }
    cylinder(double rad_param, double height_param)
    {
        base_radius = rad_param;
        height = height_param;
    }

    // funtions (methods )
    double volume()
    {
        return pi * base_radius * base_radius * height;
    }

private:
    // member variables
    double base_radius{1};
    double height{2};
};
int main()
{
    cylinder cylinder1(10, 3); // objects
    cout << "volume: " << cylinder1.volume() << endl;
    return 0;
}
