//dangling ppointers
//pointer that doesnt poin to a valid memory addrdes  
//there are thrree kind of dangling pointers
   //1.non intialised pointers
   //2.deletd pointers
   //3.multiple pointer to same address


 //always initialize your pointer
 //always give null ptr after ddeleting the pointers
 //for multiple pointers make a pointer as a master pointer


 //first two casses are very easy so i dont need to write the working 
 //example coming to the case 3

 #include<iostream>
 using namespace std;
 
 int main(){
    int *p_number3{new int (83)};
 int *p_number4{p_number3};
 cout<<"*p_number3 : "<<*p_number3<<endl;
 cout<<"*p_number4 : "<<*p_number4<<endl;

 //now you should not delete the pointer 3 and then use the pointer 4
   




  return 0;
 }
 