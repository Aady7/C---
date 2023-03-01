//struct
//similar to class
//only difference is that they have public members by default
//common use of struc t include thhaat include only public members
#include<iostream>
using namespace std;
class dog{
    string m_name;

};
struct cat{
    string m_name;
};
struct point{
    double x;
    double y;
};

void print_info_point(const point& point){
    cout<<"[x]: "<<point.x<<" [y]: "<<point.y<<endl;

}


int main(){
    dog dog1;
    cat cat1;
    /*
    dog1.m_name="fluffy";  // this will give the erro as the default members of class are private
    cat1.m_name="jan"

    */
   point point1;
   point1.x=12;
   point1.y=32;
   print_info_point(point1);
    return 0;
}
