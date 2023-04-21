#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr1[]={1,2,3,4,5,6,7,8,9};
    int n=9;
    int arr2[]={11,12,13,14,15,16};
    int m=6;
    int sum1=0;
    int sum2=0;
    for(int i=0;i<n;i++){
       sum1+=arr1[i];
    }//&This will have operation of 3n
    cout<<endl;
    for(int i=0;i<m;i++){
        sum2+=arr2[i];
    }//&This will have operation of 3m

    //^We can ignore the constant and hence Time Complexity at worst case is O(n+m)

    cout<<sum1<<endl<<sum2;



    return 0;
}