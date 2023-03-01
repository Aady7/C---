// construction and destruction call orders

#include <iostream>
#include <cstring>

using namespace std;
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
        cout << "Dog constructor called for : " << name << endl;
    }
    // destructor for killing the p_age
    ~dog()
    {
        delete p_age;
        cout << "dog  destructor called for : " << name << endl;
    }
};

int main()
{ dog dog1("doggy1", "Golden Retriever",2);
 dog dog2("doggy2", "Golden Retriever",2);
 dog dog3("doggy3", "Golden Retriever",2);
 dog dog4("doggy4", "Golden Retriever",2);

    return 0;
}
