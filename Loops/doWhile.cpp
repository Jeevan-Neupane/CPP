#include <iostream>
using namespace std;

int main()
{
    int n;
    int i = 0;
    int sum = 0;
    cin >> n;
   do{
    sum=sum+i;
    i++;
   }while(i<=n);
   cout<<sum;
   return 0;

}