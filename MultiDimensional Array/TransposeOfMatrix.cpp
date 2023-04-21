#include<iostream>
#include<vector>
using namespace std;

int main(){
     cout<<"Enter matrix A"<<endl;
    int row1,col1;
    cin>>row1>>col1;

    int a[row1][col1];

   

    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            cin>>a[i][j];
        }
    }

    int traspose[col1][row1];

    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            traspose[j][i]=a[i][j];
        }
    }

    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<col1;i++){
        for(int j=0;j<row1;j++){
            cout<<traspose[i][j]<<" ";
        }
        cout<<endl;
    }





    return 0;
}