#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main(){
      

     //basic concatination

    /* 
    char dest[40]="Hello";//destination array should be large enough to inculcate both the values
    char src[50]="world";
    strcat(dest,src);
    cout<<"dest: "<<dest<<endl;
    cout<<strcat(dest," Goodbye world");
*/

 

//more concatenation


/*
char *dest1= new char[30]{'f','i','r','e', '\0'};
char *source1= new char[30]{'l','o','r','d'};
cout<<"concating dest1 and source 1 "<<strcat(dest1,source1);
*/


//concatinatin to a desired length for the given string


/*
char dest2[]{"hello"};
char source2[]{"There is a bird on my Terrace. "};
cout<<"concatinating the dest2 and source2 upto the desired length of the source "<<strncat(dest2,source2,6);

*/




//strcpy to copy secod array into the first  array 

/*
const char *source3="C++ is a multipurpose programming language";
char *dest3= new char[strlen(source3)+1];
strcpy(dest3,source3);
cout<<"size of dest3"<<sizeof(dest3)<<endl;
cout<<"strlen of dest3"<<strlen(dest3)<<endl;
cout<<"dest3: "<<dest3;

*/

//similary we can use strncpy to specify number of terms that we want to copy




                   //introduction to the string
//declaring and using string

    return 0;
}
