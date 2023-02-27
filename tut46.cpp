//returning from function by value
#include<iostream> 
#include<cstring>
#include<string>
using namespace std;



string string_sum(string a, string b){
    string result= a+b;
    cout<<"&result :"<<&result<<endl;
    return result;
}



/*
int main(){
    int result;
    result=sum(35,56);
    cout<<"sum (35+56) is : "<<result<<"&result: "<<&result;

    */
int main(){
    string result_1;
    string str1="hello";
    string str2=" world!!";
    result_1=string_sum(str1,str2);
    cout<<"sum () is : "<<result_1<<"&result_1: "<<&result_1;

    

    return 0;
}
