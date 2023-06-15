#include <iostream>
#include <string>
using namespace std;

class Test
{
public:
    int value;
    Test *ptr;

    Test(int data)
    {
        value = data;
        ptr = NULL;
    }
};

int main()
{
    Test *new_Test = new Test(5);

    Test *pointer = NULL;
    

    return 0;
}