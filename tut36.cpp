//REFERENCES
//IT IS LIKE GIVING ANOTHE NAME TO A VARIABLE
//THEY ARE ALLIASES TO YOUR ACTUAL VARIABLE
#include<iostream>
using namespace std;

int main(){
    int int_data=86;
    double double_data=68.87;

    //references
    int& ref_int_data{int_data};
    double& ref_double_data{double_data};
    cout<<"int_data "<<int_data<<endl;
    cout<<"&int_data "<<&int_data<<endl;
    cout<<"&ref_int_data "<<&ref_int_data<<endl;

    //changing the original values will alsio change the reference values
    ref_int_data=45454;
    ref_double_data=675.686;
    //original values will take up the reference values
    cout<<int_data<<endl;
    cout<<double_data<<endl;


cout<<"======================================================="<<endl;


// compairing references and pointers
    return 0;
}
