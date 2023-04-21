#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    int k = 0;
    int sum = 0;
    cin >> n;
    while (n!=0)
    { 
      
        int j = n % 10;
    
        sum = sum + (j * pow(2, k));
        k++;
        n = n / 10;
    }
    cout<<endl<<sum;

    return 0;
}