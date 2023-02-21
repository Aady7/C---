    //dynamic array
//arrays are allocated to the heap using new operator
#include<iostream>
using namespace std;

int main(){
    size_t size{10};
    //different ways you can declare an array dynamically
    //and how they can be intialised
    double *p_salaries{new double[size]};//array will be created with garbage values
    int *p_students{new int[size]{}};//all values here are 0
    double *p_scores{new double[size]{34,67,75,554,45}};//there will numbers and then there will be zeros
    
    //null pointer check and the use of the allocated memory
    if(p_scores){
        cout<<"size of the array p_scores ;"<<sizeof(p_scores)<<endl;
        cout<<"memmory is successfully allocated dynamically for the array"<<endl;
        for(int i=0;i<size; i++){
            cout<<"value : "<<p_scores[i]<<" : "<<*(p_scores + i )<<endl;
        }
    }

    return 0;
}
