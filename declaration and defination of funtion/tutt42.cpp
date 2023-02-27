#include <iostream>
using namespace std;
int max(int a, int b);
int min(int a, int b); // funtion declaration,prototype
// signature doesnt include rretun type
int main()
{
    int x{4};
    int y{6};
    int result = min(x, y);
    cout << "minimum of the values is" << result;
    return 0;
}

// funtion declaration
int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
        (a <= b);
    {
        return b;
    }
}
//funtion defination for minimum
int min(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
        (a >= b);
    {
        return b;
    }
}