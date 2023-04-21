#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int len=9;
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }

    // &This will have 3 operation for each loop in for and one return operation so this will perform 
    // *operation=3*n+1;
    //*We can neglect constant so n is the operation in worst case time complexity

    //*So we can write worst case time complexity in O(n);
    //!Linear growth in curve



    return 0;
}