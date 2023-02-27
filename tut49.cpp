//using capture list in the lamda funtion
//capture list give us a way to include the values that are declared outside the scope of the lamda funtion into the lamda funtion
#include<iostream>
using namespace std;

int main(){
    double a=4;
    double b=4;
    auto func5=[a,b](){
        return a+b;

     
};
cout<<"func5(a,b)"<<func5()<<endl;



//capturing by value

int c{42};
/*
auto func6=[c](){
    cout<<"Inner value: "<<c<<endl;
};
for(size_t i{}; i<5;i++){
    
    c++;
}
cout<<"outer value: "<<c<<endl;
func6();
*/



// capture by reference


auto func6=[&c](){
    cout<<"Inner value: "<<c<<endl;
};
for(size_t i{}; i<5;i++){
    
    c++;
}
cout<<"outer value: "<<c<<endl;
func6();

    return 0;
}




//capture all by value
//[=]
//calture all by reference
//[&]