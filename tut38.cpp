#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    const char message1[]{"The sky is blue and bright"};
    const char *message2{"The sky is blye and bright"}; // here the array decays into the pointer
    cout << "strlen ignoring null spaces" << strlen(message1) << endl;
    cout << "length using size of that includes the null spaces" << sizeof(message1) << endl;




    cout << "==================================================================";




    const char *string_data1{"alabama"};
    const char *string_data2{"blabama"};
    // now we will compare the strings
    cout << "camparing alabama and blabama" << strcmp(string_data1, string_data2) << endl;
    // giving a negative value as the lhs>rhs
    cout << "camparing blabama and blabama" << strcmp(string_data2, string_data2) << endl;
    //gives zero as both they are equal
    cout << "camparing alabama and blabama" << strcmp(string_data2, string_data1) << endl;
//gives a positive value as lhs<rhs

//we can also compare two strings upto a desired length using strncmp
int n=3;
cout<<"comparing the string_data1 and string_data2 upto 3"<<strncmp(string_data1,string_data2,n);







cout<<"=========================================================";





//now find a perticular character from the string 
const char* const str{"Try not to run away,Travis. There is no exit."};
char target='T';
const char *result=str;
size_t iterations{};
while((result=strchr(result,target))!=nullptr){
    cout<<"Found "<<target<<"starting at "<<result<<"\n";
    ++result;
    ++iterations;
}
cout<<"iterations: "<<iterations<<endl;
cout<<result;




cout<<"=================================================";

//revisit the video at 13:41:47 freecodecamp c++


    return 0;
}
