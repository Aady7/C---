//one defination rule states that we can have multiple defination for a variable
//we can have it other file
//but we can have multiple definations for the classes
//funtion:reusable piece of code that cann take a number of optional inputs and producev desired output
//each function shooud be unique that include name and patrameyetrs 
          //funtion





 //funtion that takes the single parameter and doesn't
 //give back the result explicitly
 #include<iostream>
 using namespace std;
 void enter_bar(size_t  age){  // funtion parameter
    if(age> 18){
        cout<<"HEY! YOU CAN ENTER THE BAR"<<endl;  
    }
    else{
        cout<<"YOU ARE TOO YOUNG FOR THIS"<<endl;
        }
    return;    

 }


 //funtion that takes multile inputs and retun one single output
 int max(int a, int b){
    if(a>b){
        return a;
    }
    else(a<=b);{
        return b;
    }
 }


 //funtion that doesnot take any parameter and return no output


 void say_hello(){
    cout<<"hello there"<<endl;
    return;
 }


 //funtion that takes no input but return an output
 int luckynumber(){
    return 99;
 }


 int main(){
    //enter_bar(33);  //function argument
    //for(size_t i{1}; i<20;i++){
     //   enter_bar(i);




     /*
     int a;
     int b;
     cout<<"enter the first value "<<endl;
     cin>>a;
     cout<<"enter the second value"<<endl;
     cin>>b;
     cout<<"maximum of a,b is"<<max(a,b);
    */

//calling hello
    //say_hello();


/*
  int result{0};  
result=luckynumber();
cout<<"the lucky number is "<<result;


*/


    return 0;
 }
          