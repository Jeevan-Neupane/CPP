#include<iostream>
#include<vector>
using namespace std;

int main(){
    int row;
    cin>>row;
    int array[row][row];


    for(int i=0;i<row;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || j==i){
               array[i][j]=1;
            }
            else{
                array[i][j]=array[i-1][j-1]+array[i-1][j];

                
                
            }

        }
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<=i;j++){
            cout<<array[i][j]<<" ";
                
                
            }
            cout<<endl;

        
    }



    return 0;
}