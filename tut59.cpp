//destructors
//special funtion or methods that are called to destroy the objects
//destructor help us to release the memory
//whwen local stack goes out of the scope
//when object is passed by the value
//it is not possible to pass parameters to destructors
#include<iostream>
#include<cstring>
using namespace std;
class dog{
    private:
        string name;
        string breed;
        int*  p_age{nullptr};
    public:
        dog()=default;
        dog(string name_param, string breed_param, int age_param){
            name=name_param;
            breed=breed_param;
            p_age=new int;
            *p_age=age_param;
            cout<<"Dog constructor called for : "<<name<<endl;

        }
        //destructor for killing the p_age
    ~dog(){
        delete p_age;
        cout<<"dog  destructor called for : "<<name<<endl;
    }


    
};
void some_func(){
    dog *p_dog=new  dog("Fluffy", "Golden Retriever",3);
    delete p_dog;   //causes for the destructor to be called
}
int main(){


    some_func();
    cout<<"done!!"<<endl;
    
    return 0;
}
