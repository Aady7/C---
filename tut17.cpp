#include<iostream>
using namespace std;
//int product(int a,  int b){
//   static int c=0;//this will be executed only once
//   c=c+1;//next time this function will be  run
//   return a*b+c;
//
int moneyreceived(int currentmoney, float factor=1.04){
    return currentmoney*factor;
}

int main(){
    float money;

    cout<<"Enter the value of the money"<<endl;
    cin>>money;
    cout<<"if u have deposited "<<money<<" RS you will get the lumpsum ammount of "<<moneyreceived(money)<<" RS after a due course of an year"<<endl;
    cout<<"FOR VIP if u have deposited "<<money<<" RS you will get the lumpsum ammount of "<<moneyreceived(money, 1.1)<<" RS after a due course of an year";

    //cout<<"Enter the first number"<<endl;
    //cin>>a;
    //cout<<"Enter the second number"<<endl;
    //cin>>b;
    //
    //cout<<"THE PRODUCT OF THE TWO NUMBERS IS"<<product(a,b)<<endl;
    //cout<<"THE PRODUCT OF THE TWO NUMBERS IS"<<product(a,b)<<endl;
    //cout<<"THE PRODUCT OF THE TWO NUMBERS IS"<<product(a,b)<<endl;
    //cout<<"THE PRODUCT OF THE TWO NUMBERS IS"<<product(a,b)<<endl;
    //cout<<"THE PRODUCT OF THE TWO NUMBERS IS"<<product(a,b)<<endl;
    //cout<<"THE PRODUCT OF THE TWO NUMBERS IS"<<product(a,b)<<endl;
    //cout<<"THE PRODUCT OF THE TWO NUMBERS IS"<<product(a,b)<<endl;
//
    return 0;
}
