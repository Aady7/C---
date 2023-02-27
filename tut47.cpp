//funtion overloading
#include<iostream>
using namespace std;

//max funtion already exist in one of the previous files...
double max(double a, double b){
    cout<<"double overload called"<<endl;
    return(a>b)? a:b;
}

double max(double a, int b, int c){
    cout<<"double max(double int int ) funtion called"
}
int main(){
    cout<<max(5.6,67.7);
    return 0;
}
