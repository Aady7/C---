//pass by value parameter

/*
#include<iostream>
using namespace std;
void say_age(int age){
    ++age;
    cout<<"Hello you are "<<age<<" year old"<<endl;
}

int main(){
    int age{23};
    cout<<"age before the call of the funtion"<<age<<endl;
    say_age(age);//argument
    cout<<"age after the call of the funtion"<<age;
    return 0;
}


*/





//pass by pointer parameter



/*
#include<iostream>
using namespace std;
void say_age(int* age){
    ++(*age);
    cout<<"Hello you are "<<*age<<" year old"<<endl;
}

int main(){
    int age{23};
    cout<<"age before the call of the funtion"<< age <<endl;
    say_age(&age);//argument
    cout<<"age after the call of the funtion"<<age;
    return 0;
}

*/





/*
//pass by reference
#include<iostream>
using namespace std;

void say_age(int& age);//decleration

int main(){
    int age{23};
    cout<<"the age before the call of the function is "<<age<<endl;
    say_age(age);
    cout<<"age after the call of the function is "<<age<<endl;

    return 0;
}

void say_age(int& age){
    ++age;
    cout<<"Hello you are "<<age<<"year old"<<"the address is "<<&age<<endl;
}



*/