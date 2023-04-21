#include <iostream>
#include <vector>
using namespace std;
int factorial(int n)
{
   
   
    if(n==1 || n==0){
        return 1;
    }

    return n * factorial(n - 1);

   
}

int main()
{
    int n;
    int value;
    cout << "Enter the number which you want to find the factorial" << endl;
    cin >> n;
    value = factorial(n);
    cout << "The factorial of the  " << value << endl;

    return 0;
}