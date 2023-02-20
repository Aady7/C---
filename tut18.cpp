#include<iostream>
using namespace std;
//
//int main(){
//    int n,i,fact=1;
//    cout<<"ENTER THE NUMBERS"<<endl;
//    cin>>n;
//    for(i=1;i<=n;i++){
//        fact=fact*i;
//
//
//    }
//    cout<<"the factorial is"<<fact;
//
//
//    return 0;
//}
//
//using recursion by defining a function 
#include<iostream>
using namespace std;
int factorial(int num){
    if(num<=1){
        return 1;
     
    }
    return num*factorial(num-1);
}

/// @brief 
/// @return 
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<"factorilm of the gven number is"<<factorial(n);
    return 0;
}
