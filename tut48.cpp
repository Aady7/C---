      //lamda funtions
//mechanism to call  anonymous funtions
//[](){
    //  &&&  <funtion body>
//};
//   [] capture list
//   () parameters
//we give lamda funtion a call by giving a variable name to it
//lamda funtion can take parameters
//we can also assign return to the lamda funtion
//we can put the entire lamda funtion to a an output function that is cout
#include<iostream>
using namespace std;

int main(){


    /*
    [](){
        cout<<"HEllO WORLD!!"<<endl;
       //this will not do any thinng as we are not calling the lamda funtiom
    };

    */



//calling lamda funtion by a name


/*
   auto func=[](){
        cout<<"HEllO WORLD!!"<<endl;
     };
     func();
     func();

*/


//calling lamda funtions directly it can be used to call it only once 

     

/*
[](){
        cout<<"HEllO WORLD!!"<<endl;

     
}();


*/

//declaring a lamda funtion that takes a parameter

   //calling it once without using a namee
/*
[](double a, double b){
        cout<<a+b <<endl;

     
}(10.3, 3.54);

*/

//calling it mmultiple times  using the name of the funtion



/*
auto func1=[](double a, double b){
        cout<<a+b<<endl;

     
};
func1(39.55,686.84);
func1(454.584,48.489);


*/

//calling a lmda funtion that returns something


[](double a, double b){
        return a+b;

     
}(2,4);//this wil not return any thing as we are not callng aur lamda funtion anywhere here 
//to make it return any thing
cout<<"entering the sum of 2 and 4 "<<[](double a, double b){
        return a+b;

     
}(2,4)<<endl;


//calling the function multiple times by givng it a name
 auto func2=[](double a, double b){
        return a+b;

     
};
double result1{func2(3,5)};
double result2{func2(3,7)};
cout<<"result1: "<<result1<<endl;



//explicitly define the return type 
auto func3=[](double a, double b)->int{
        return a+b;

     
};
auto result4=func3(3.55,554.54);
cout<<"result4: "<<result4<<endl;
cout<<"done"<<endl;
    return 0;
}
