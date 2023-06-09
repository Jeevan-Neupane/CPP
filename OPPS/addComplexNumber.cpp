#include <iostream>
#include <string>
using namespace std;

class Complex
{

public:
    int real;
    int img;
    Complex(int a, int b)
    {
        real = a;
        img = b;
    }
     Complex   operator*(Complex &c)
    {
        Complex ans(0, 0);
        ans.real = real * c.real;
        ans.img = img * c.img;
        return ans;
    }
     Complex   operator+(Complex &c)
    {
        Complex ans(0, 0);
        ans.real = real + c.real;
        ans.img = img + c.img;
        return ans;
    }
};

int main()
{

    Complex c1(5, 3);

    Complex c2(2, 3);
 

    Complex c3 = c1 * c2;//*These operator are not defined to be used for our customly built object
    cout<<c3.real<<" i"<<c3.img<<endl;

    return 0;
}