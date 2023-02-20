
         //DYNAMIC MEMORY ALLOCATION

//dont try to use a pointer that u havent initialised.. 
//do not try to use the pointers thaat contains a null ptr..?
//so far  we have in using the stack section of the memomry but noe we will learn u
//usng the heap oof the  memory
//stack kis finit but heat is additional
//for stack developer isn't in full control to memory lifetime
//life time is controlled bye the stack mechanism.
//scope memory dies when we go out ogf the scope 


#include<iostream>
using namespace std;

int main(){
    int number{22};
    int * p_number=&number;
    cout<<"number"<<number<<endl;
    cout<<"p_number"<<p_number<<endl;
    cout<<"& number"<<&number<<endl;
    cout<<"*p_number"<<*p_number<<endl;

   //writting into uninitiallissed pointer is really bad
   int *p_number2;
   *p_number2=55;


  //intialising to a null poineter is really bad habbit
  //int *p_number3{};
 // *p_number3=45; // you can not do it it will crash the program the f
  //first statemment will be executed but not the second one
    

    //DYBNAMIC MEMMOYRY LOCATI0ON
  

  /*
int *p_number4{nullptr};
p_number4 = new int;

*p_number4=77;
cout<<"dynamically allocated memomry"<<endl;
cout<<"*p_number4 "<<*p_number4<<endl;

delete p_number4;
p_number4 = nullptr;

*/

int *p_number5{new int};
int *p_number6{new int (222) };
int *p_number7{new int {34} };
cout<<"p_number5"<<p_number5<<endl;
cout<<"*p_number5"<<*p_number5<<endl;
cout<<"p_number6"<<p_number6<<endl;
cout<<"*p_number6"<<*p_number6<<endl;
cout<<"p_number7"<<p_number7<<endl;
cout<<"*p_number7"<<*p_number7<<endl;

delete p_number5;
p_number5= nullptr;

delete p_number6;
p_number6=nullptr;

delete p_number7;
p_number7=nullptr;

//can teisr gekeyef pointers 

p_number5= new int(63);
cout<<"*p_number5"<<*p_number5;

delete p_number5;
p_number5= nullptr;


//you should not call the delete funtion that means that you are 
//releasing the memory twice
//line just after the error line will never be conducted



    return 0;
}
