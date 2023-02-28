#include<iostream>
#include<cstring>
using namespace std;

//passing by value


/*
template<typename T> T maximum(T a, T b); //funtion declaration
int main(){

    double a{4.5};
    double b{45.67};
    cout<<"out value of &a before the call of the funtion"<<&a<<endl;
    auto max1=maximum(a,b);
    cout<<"out value of &b after the call of the funtion"<<&a<<endl;
    
    return 0;
}
//funtion defination
template <typename T> T maximum(T a, T b){
    cout<<"in &a: "<<&a<<endl;
    return(a>b)? a:b;

}

*/


//passing by reference to the template value



/*
template<typename T>  const T& maximum(const T& a, const T& b); //funtion declaration
int main(){

    double a{4.5};
    double b{45.67};
    cout<<"out value of &a before the call of the funtion"<<&a<<endl;
    auto max1=maximum(a,b);
    cout<<"out value of &b after the call of the funtion"<<&a<<endl;
    
    return 0;
}
//funtion defination
template <typename T> const T& maximum(const T& a,const  T& b){
    cout<<"in &a: "<<&a<<endl;
    return(a>b)? a:b;

}

*/

//template specialization



/*

template <typename T>
T maximum(T a, T b){
    return(a>b)? a:b;
};



int main(){


   /* 
    int x{4};
    int y{45};
    double a{45.48};
    double b{454.78};
    string e{"hello"};
    string f{" world"};


auto max_int= maximum(x,y);
auto max_double= maximum(a,b);
auto max_string= maximum(e,f);
cout<<"max_int "<<max_int<<endl;
cout<<"max_double "<<max_double<<endl;
cout<<"max_string "<<max_string<<endl;







const char* g{"wild"};
const char* h{"animal"};
auto result=maximum(g,h);// this will give a wrong result as
// we are relly comparing the pointers that is mot really asked to go
//we can solve this by template speciaization
cout<<"char*pointer"<< result<<endl;


*/


//now tring the same using template specialization
template <typename T>
T maximum(T a, T b){
    return(a>b)? a:b;
}
template<>
const char *maximum<const char*>(const char*a, const char *b){
    return(strcmp(a,b)>0)? a:b;
    
}
int main(){
    const char* g{"wild"};
const char* h{"animal"};
auto result=maximum(g,h);
cout<<"char*pointer "<< result<<endl;
return 0;

}

    

