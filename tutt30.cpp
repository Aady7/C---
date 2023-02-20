//int* p_var







//nulptr to poin that that are not pointing anu where 
//pointer of one type stores same type of the value
//position of the star symboll does not matters
//int*p_int(&int_var);

//declarijng and  using pointers 
#include<iostream>
using namespace std;

int main(){

    /*
    int*p_number{};//will initiate null ptr
    double*p_fractional_number{};

    //explicitlly defining the null pointer
    int*p_number1{nullptr};

//size of the pointer will always remain same tha is 8 bytes inn the memory

int*p_number2(nullptr);

//int int_var{45};
//cout<<int_var<<endl;

int*p_number3{}; int int_var3;
cout<<"size of the p_number is "<<endl<<sizeof(p_number3)<<"size of the number int_var3 "<<sizeof(int_var3);


int *p_number4{};
int other_int_var4{};//no room for confussion


*/


int int_var{43};
int *p_int{&int_var};//address of the operator
//cout<<"Int var"<<int_var<<endl;
//cout<<"p_int(address in the memory) :"<<p_int<<endl;

//you can also change the address stored in the pointer

int int_var1{34};
p_int=&int_var1;
cout<<"Int var1"<<int_var1<<endl;
cout<<"p_int(address in the memory) :"<<p_int<<endl;


//ca't cross assign between the pointers of differenrt types
int *p_int1(nullptr);
double double_var(33);

//p_int=&double_var(copiler error)
//cout<<p_int



/*
//derefrencing a pointer

int*p_int2(nullptr);
int int_data{56};
p_int2=&int_data;
cout<<"value :"<<*p_int2<<endl;


*/


    return 0;
}
