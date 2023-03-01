

//size
//size of the class only includes the sizes of the member variables
#include<iostream>
using namespace std;
class dog{
    public:
       dog()=default;
    private:
       size_t leg_count;
       size_t arm_count;
       int* p_age;


};

int main(){
    dog dog1;
    cout<<"sizeof(size_t)"<<sizeof(size_t)<<endl;
    cout<<"sizeof(dog1)"<<sizeof(dog1)<<endl;
    cout<<"sizeof(int*)"<<sizeof(int*)<<endl;
    return 0;
}
