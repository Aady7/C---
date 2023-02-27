//tempalate thype deduction
//template parameters is something that we have in the defination of the funtion
//template argument is the through which we call the funtion
//maximum<double>
//it can do implicit conversion from integer to double
#include<iostream>
#include<string>
using namespace std;

/*


template <typename T>
T maximum(T a, T b){
    return(a>b)? a:b;
};
*/


int main(){
    int x{4};
    int y{45};
    double a{45.48};
    double b{454.78};
    string e{"hello"};
    string f{" world"};
    auto max=maximum(x,y);
    cout<<"first command is done"<<endl;

    //explicit template argument
    auto max1=maximum<double>(x,b);



//



    return 0;
}
