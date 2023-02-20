#include<iostream>
using namespace std;

int fabonacci(int num){
    if(num==1){
        return 1;
    }
    else if(num==2){
        return 2;

        

    }
    return num+fabonacci(num-1);
}

int main(){
    int n;
    cout<<"Enter the  term in the series"<<endl;
    cin>>n;
    cout<<"THE value at nth position in the fabonacci series is "<<fabonacci(n);
    return 0;
}
