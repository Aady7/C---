#include<iostream>
#include<cstring>
#include<string>
using namespace std;




void max_string(const string& input1, const string input2, string &output){
    if(input1>input2){  //output parameter is passed as a reference 
        output=input1;
    }
    else{
        output=input2;
    }
}


void max_int(int  input1, int input2, int &output){
    if(input1>input2){  //output parameter is passed as a reference 
        output=input1;  //hence any shange made into output will be changed as it is is passed by referernce
        
    }
    else{
        output=input2;
    }
}

void max_double(double  input1, double input2, double *output){
    if(input1>input2){  //output parameter is passed as a reference 
        *output=input1;  //hence any shange made into output will be changed as it is is passed by referernce
        
    }
    else{
        *output=input2;
    }
}




int main(){


    /*
    string out_str;
    string string1("Alabama");
    string string2("Blabama");
    max_string(string1,string2,out_str);
    cout<<"max_string :"<<out_str<<endl;
    

    */




/*
   int out_int;
   int integer1{43};
   int integer2{35};
   max_int(integer1, integer1, out_int);
   cout<<"max_int :"<<out_int<<endl;



*/

int out_double;
   double double1{43.89};
   double double2{35.65};
   max_int(double1, double2, out_double);
   cout<<"max_double :"<<out_double<<endl;





    return 0;
}



