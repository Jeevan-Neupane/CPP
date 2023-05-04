#include <iostream>
#include <vector>
using namespace std;

int FindMax(vector<int> &v)
{
    int max = v[0];

    for (int i = 0; i < v.size(); i++)
    {
        if (max < v[i])
        {
            max = v[i];
        }
    }

    return max;
}

void FindFrequency(vector<int> &v, vector<int> &frequency)
{
    for (int i = 0; i < v.size(); i++)
    {
        frequency[v[i]]++;
    }
}

void CummulativeArray(vector<int> &frequency)
{
    for (int i = 1; i < frequency.size(); i++)
    {
        frequency[i] = frequency[i] + frequency[i - 1];
    }
}

vector<int> SortedArray(vector<int> &v, vector<int> &frequency)
{
    vector <int> ans(v.size());
    for(int i=v.size()-1;i>=0;i--){
        ans[--frequency[v[i]]]=v[i];

        
    }
    return ans;
}

int main()
{

    int size;

    cout << "Size of vector is " << endl;

    cin >> size;

    vector<int> v(size);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    //&Finding Maximum element
    int max = FindMax(v);

    vector<int> frequency(max + 1, 0);

    FindFrequency(v, frequency);
    CummulativeArray(frequency);
    vector <int> ans= SortedArray(v, frequency);

    cout << "Frequency Array is " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        v[i]=ans[i];
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }

    return 0;
}