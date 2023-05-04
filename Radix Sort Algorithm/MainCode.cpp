#include <iostream>
#include <vector>
using namespace std;

void countSort(vector<int> &v, int pos)
{ 
   
    vector<int> frequecy(10, 0);
 
    for (int i = 0;i<v.size(); i++)
    {
        frequecy[(v[i] / pos) % 10]++;
    }
 

    for (int i = 1; i < frequecy.size(); i++)
    {
        frequecy[i] = frequecy[i] + frequecy[i - 1];
    }

    vector <int> ans(v.size());

    for(int i=v.size()-1;i>=0;i--){
        ans[--frequecy[(v[i] / pos) % 10]]=v[i];
    }

    for(int i=0;i<v.size();i++){
        v[i]=ans[i];
    }
}


void radixSort(vector<int> &v)
{
    int maxEl = INT16_MIN;


    for (int i = 0; i < v.size(); i++)
    {
        if (maxEl < v[i])
        {
            maxEl = max(maxEl, v[i]);
        }
    }
    

    for (int pos = 1; maxEl / pos > 0; pos = pos * 10)
    {
        countSort(v, pos);
    }
}

int main()
{

    vector<int> v{170, 45, 75, 90, 502, 2};

    radixSort(v);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }

    return 0;
}