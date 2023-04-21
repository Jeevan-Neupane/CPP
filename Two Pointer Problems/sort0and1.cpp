#include <iostream>
#include <vector>
using namespace std;

void sortVector(vector<int> &v)
{
    int noOfzero=0;
    cout<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 0)
        {
            noOfzero++;
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        if(i<noOfzero){
            v[i]=0;
        }
        else{
            v[i]=1;
        }
    }
   
}

int main()
{
    int n;

    cout << "Enter No of Digit"<<endl;
    cin >> n;
    vector<int> v;

    cout << "Enter 0 or 1" << endl;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }

    sortVector(v);
    cout<<"Sorted Array is "<<endl;
    for (int i = 0; i < v.size(); i++)
    {
       cout<<v[i]<<" ";
    }



    return 0;
}