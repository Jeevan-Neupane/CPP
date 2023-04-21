#include <iostream>
#include <vector>
using namespace std;

void subArray(vector<int> &v, int size)
{
    int sumP=0;
    int sumS=0;

    for(int i=0;i<size;i++){
        sumP=0;
        sumS=0;
        
        for(int k=0;k<=i;k++){
            sumP=sumP+v[k];

        }

        for(int j=i+1;j<size;j++){
            sumS=sumS+v[j];


        }
        if(sumP==sumS){
            cout<<"Yes SubArray Existed.";
            cout<<i<<endl<<sumP<<endl<<sumS<<endl;
            break;
        }
        else{
            cout<<"Doesn't Exist";
            break;
        }
   

    }
    int sum = 0;
   
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


    subArray(v,n);


    

    return 0;
}