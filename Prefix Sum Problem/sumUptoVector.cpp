#include <iostream>
#include <vector>
using namespace std;

void sumUpto(vector<int> &v, int size)
{
    int sum = 0;
    // for (int i = 0; i < size; i++)
    // {

    //     for (int j = i; j <= i; j++)
    //     {
    //         sum = sum + v[j];
    //         v[i] = sum;
    //         break;
    //     }
    // }
    for(int i=1;i<size;i++){
        v[i]=v[i]+v[i-1];
    }
}

int main()
{
    vector<int> v;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }


    sumUpto(v,n);


    for(int ele:v){
    cout<<ele<<endl;
}

    return 0;
}