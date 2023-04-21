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


    cout<<"Enter matrix B"<<endl;
    int row2,col2;
    cin>>row2>>col2;

    int b[row2][col2];
    for(int i=0;i<row2;i++){
        for(int j=0;j<col2;j++){
            cin>>b[i][j];
        }
    } 
    if(col1!=row2){
        cout<<"Matrix Multiplication is not possible!!";
    }

    int c[row1][col2];


    int sum=0;

    for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
        sum=0;
            for(int k=0;k<row2;k++){
                sum=sum+a[i][k]*b[k][j];
                c[i][j]=sum;
            }
        }
    }





    for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }



    return 0;
}