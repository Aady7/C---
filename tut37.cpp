//character manipulation and string
//     character manipulation
//cppreferences strings library
#include<iostream>
using namespace std;

int main(){

    /*
    cout<<"c is alphanumeric "<<isalnum('c')<<endl;
    cout<<"^ is alphanumeric "<<isalnum('^')<<endl;
//using these from a test condition
char input_char{'*'};
if(isalnum(input_char)){
    cout<<"the give character is alphanumeric"<<endl;

}
else{
    cout<<"it is not a alpha numeric"<<endl;
}

*/




/*
cout<<isalpha('e')<<endl;
cout<<isalpha('^')<<endl;
cout<<isalpha('4')<<endl;


*/


char message[] {"Hello the how are you all doing is it all Fine There "};
cout<<message<<endl;
cout<<"size of message"<<sizeof(message);
/*
int blankspace_count{};
for(size_t i{0}; i< sizeof( message); i++){
    if(isblank(message[i])){
        cout<<"found a blank space at index "<<i<<endl;
        ++blankspace_count;
    }

}
cout<<"total number of blank spaces in the message are "<<blankspace_count<<endl;




*/


//to count the number of upper and lower case numbers in messge


/*
int lowercase_count{};
int uppercase_count{};
for(size_t i{0}; i<sizeof(message);++i){
    if(islower(message[i])){
        cout<<"found a lower case number at index"<<i<<endl;
        ++lowercase_count;
    }
    if(isupper(message[i])){
        cout<<"found a uppercase number at index  "<<i<<endl;
        ++uppercase_count;
    }
}
cout<<"number of lowercases are"<<lowercase_count<<endl;
cout<<"numer of uppercases are "<<uppercase_count<<endl;

*/
   

//similarly we can count for digits using isdigit funtion

//to convert all of message into the uppercase
char new_message[sizeof(message)];
for(size_t i{0}; i<sizeof(message);++i){
    new_message[i]=toupper(message[i]);

}
cout<<"The new message after being converted to upper case is"<<new_message;
  return 0;
}
