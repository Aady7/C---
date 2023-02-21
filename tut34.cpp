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
    

//double allocation
int *p_number1{new int(54)};
p_number1{new int {23}};
delete p_number1 // will returnt the second address to the operating system but the first address 
//will still be into the heap
return 0;
}
 //nested scopes with dynamically allocated memory
 {
    int *p_number3{new int{78}};
    //you have accesss to the allocated meomory until it is into the scope
 }
 delete p_number3;//we do not have the access to this piece of memmory now
 //so this command can not be excecuted it will throw error..