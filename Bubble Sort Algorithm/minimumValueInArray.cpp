#include <iostream>
#include <vector>
using namespace std;

int MinimumInArray(vector<int> &a, int i, int minimum)
{
    if (a.size() == 1)
    {
       
        return minimum;
    }
    if (i > a.size() - 1)
    {
        return minimum;
    }

    if (minimum>a[i]){
      minimum=a[i];

    }
 
    

    MinimumInArray(a, i + 1, minimum);
}

int main()
{
    int size;
    cout << "Size of an array is " << endl;
    cin >> size;
    vector<int> a(size);
    cout << "Enter the value of array" << endl;
    for (int i = 0; i < a.size(); i++)
    {
        cin >> a[i];
    }

    int minimum = a[0];
    minimum = MinimumInArray(a, 1, minimum);
    cout << "Minimum value is " << minimum << endl;

    cout << "Array after sorting is " << endl;
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}