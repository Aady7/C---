#include<iostream>
using namespace std;

int main(){

    


    int score[]{34,56,67,78,565,68};

    /*
    int count{size(score)};
    for ( int i = 0; i < count; i++)
    {
       cout<<"score["<<i<< "] :"<<score[i]<<endl;
    }


    */

/*
   cout<<"the size of the array is "<<sizeof(score)<<endl;
   cout<<"the size of the elements is"<<sizeof(score[0])<<endl;
   int n=sizeof(score)/sizeof(score[0]);
   for(int i=0; i<n; i++){
    cout<<"score["<<i<<"] :"<<score[i]<<endl;
   }


*/

//range based for loops
for(auto i:score){
    cout<<"value :"<<i<<endl;
}
    
    return 0;
}
