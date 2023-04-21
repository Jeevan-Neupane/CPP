#include <iostream>
#include <vector>
using namespace std;

void sortVector(vector<int> &v)
{
   
  
    for (int i = 0; i < v.size(); i++)
    {
        for(int j=v.size()-1;j>=i;j--){

            if(v[i]==1 && v[j]==0 ){
                int k=v[i];
                v[i]=v[j];
                v[j]=k;
                
            }
            if(v[i]==0){
                continue;
            }
            if(v[j]==1){
                continue;
            }
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