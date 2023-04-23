#include<iostream>
#include<vector>
using namespace std;


void NumberOfPaths(int m,int n,int i,int j,int *path){
    if(i==m-1 && j==n-1){
        *path=*path+1;
        
        return;
    }
    if(i<m-1){
    NumberOfPaths(m,n,i+1,j,path);

    }
    
    if(j<n-1){
    NumberOfPaths(m,n,i,j+1,path);
   }

}

int main(){
    int n,m;
    m=4;
    n=4;
    int path=0;
    NumberOfPaths(m,n,0,0,&path);
    cout<<path<<endl;
   





    return 0;
}