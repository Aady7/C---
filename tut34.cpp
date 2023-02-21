//memiry leaks
//memory leaks 
#include<iostream>
using namespace std;

int main(){
    int *p_number{new int{56}}; //points to some addresss lets call the address
    //should delete and resret
    int number{45};
    p_number=&number;//noe p_number points to address2, but the address one is still not 
    //relased, becuse we have lost the for address one.
    return 0;
}


//