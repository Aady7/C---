// the this pointer
#include <iostream>
#include <cstring>
using namespace std;

/*



class dog
{
private:
    string name;
    string breed;
    int *p_age{nullptr};

public:
    dog() = default;
    dog(string name_param, string breed_param, int age_param)
    {
        name = name_param;
        breed = breed_param;
        p_age = new int;
        *p_age = age_param;
        cout << "Dog constructor called for : " << name << " at " << this << endl;
    }
    // destructor for killing the p_age
    ~dog()
    {
        delete p_age;
        cout << "dog  destructor called for : " << name << " at " << this << endl;
    }

    // setters
    void set_dog_name(string name)
    {
        // name= name;
        this ->name = name;
    }

    void set_dog_breed(string breed)
    {
        this->breed=breed;

    }
    void set_dog_age(int age){
       *(this->p_age)=age;
    }
    void print_info()
    {
        cout << "dog ( " << this << " )"
             << " : [ name : " << name << " breed : " << breed << " age : " << *p_age << " ]" << endl;
    }
};







int main()
{
    dog dog1("Fluffy", "Golden Retriever", 3);
    // constructors
    dog1.print_info();
    dog1.set_dog_name("Jennifer");
    dog1.set_dog_breed("Sepherd");
    dog1.set_dog_age(5);
    dog1.print_info();
    cout << "done!!" << endl;
    // distructors



    return 0;
}

*/




//setting chained inputs using pointers that enables us to set data for our objects in one line .


/*
class dog
{
private:
    string name;
    string breed;
    int *p_age{nullptr};

public:
    dog() = default;
    dog(string name_param, string breed_param, int age_param)
    {
        name = name_param;
        breed = breed_param;
        p_age = new int;
        *p_age = age_param;
        cout << "Dog constructor called for : " << name << " at " << this << endl;
    }
    // destructor for killing the p_age
    ~dog()
    {
        delete p_age;
        cout << "dog  destructor called for : " << name << " at " << this << endl;
    }

    // setters
    dog* set_dog_name(string name)
    {
        // name= name;
        this ->name = name;
        return this;

    }

    dog* set_dog_breed(string breed)
    {
        this->breed=breed;
        return this;


    }
    dog* set_dog_age(int age){
       *(this->p_age)=age;
       return this;
    }
    void print_info()
    {
        cout << "dog ( " << this << " )"
             << " : [ name : " << name << " breed : " << breed << " age : " << *p_age << " ]" << endl;
    }
};







int main()
{
    dog dog1("Fluffy", "Golden Retriever", 3);
    // constructors
    dog1.print_info();
    dog1.set_dog_name("Pumba")->set_dog_breed("Husky")->set_dog_age(4)->print_info();
    
    cout << "done!!" << endl;
    // distructors



    return 0;
}


*/



//chained call usinfg referencees




class dog
{
private:
    string name;
    string breed;
    int *p_age{nullptr};

public:
    dog() = default;
    dog(string name_param, string breed_param, int age_param)
    {
        name = name_param;
        breed = breed_param;
        p_age = new int;
        *p_age = age_param;
        cout << "Dog constructor called for : " << name << " at " << this << endl;
    }
    // destructor for killing the p_age
    ~dog()
    {
        delete p_age;
        cout << "dog  destructor called for : " << name << " at " << this << endl;
    }

    // setters
    dog& set_dog_name(string name)
    {
        // name= name;
        this ->name = name;
        return *this;

    }

    dog& set_dog_breed(string breed)
    {
        this->breed=breed;
        return *this;


    }
    dog& set_dog_age(int age){
       *(this->p_age)=age;
       return *this;
    }
    void print_info()
    {
        cout << "dog ( " << this << " )"
             << " : [ name : " << name << " breed : " << breed << " age : " << *p_age << " ]" << endl;
    }
};







int main()
{
    dog dog1("Fluffy", "Golden Retriever", 3);
    // constructors
    dog1.print_info();
    dog1.set_dog_name("Rumba").set_dog_breed("Wild Fox Terrier").set_dog_age(1).print_info();
    cout << "done!!" << endl;
    // distructors



    return 0;
}



