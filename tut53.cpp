            //CONCEPTS
//Mechanism to se constraints and restriction for templates
//standard builtin concepts
//costamized concept
//requires is added
//using type trait
#include<iostream>
#include<concepts>
using namespace std;
template<typename T>
T add(T a, T b){
    return (a+b);
}

int main(){
    char a_0{45};
    char a_1{43};
    auto result=add(a_0,a_1);
    cout<<"result for the addition of "<<result<<endl;
    
    return 0;
}

