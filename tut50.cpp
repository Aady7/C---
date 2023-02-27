             //funtion templates
//mechanism for blueprints for funtions
//it is used we similar logics for multiole funtions overloading
//just a blueprint that the compiler uses to generate original funtion on the basis of our input
//avoid several overload for the funtion 
//only those overloads are created that are actually used
#include<iostream>
using namespace std;

/*
template <typename T>
T maximum(T a, T b){
    return(a>b)? a:b;
};
*/
template<typename T>
T multiply(T a, T b){
    return (a*b);
};


int main(){
int x{5};
int y{5};
int result= multiply(x,y);
cout<<"result "<<result;
    
    return 0;
}
//both the parameters that are to be compared should be of the same type