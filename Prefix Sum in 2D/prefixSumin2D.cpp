#include<iostream>
#include<vector>
using namespace std;

int rectangleSum(vector <vector<int>> &Matrix,int l1,int r1,int l2,int r2){
    int sum=0;

    for(int i=0;i<Matrix.size();i++){
        for(int j=1;j<Matrix[i].size();j++){
            Matrix[i][j]+=Matrix[i][j-1];

        }
    }
     cout<<"You have Entered Following Matrix"<<endl;
    for(int i=0;i<Matrix.size();i++){
        for(int j=0;j<Matrix[i].size();j++){
            cout<<Matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=l1;i<=l2;i++){
        if(r1!=0){

        sum+=Matrix[i][r2]-Matrix[i][r1-1];
        }
        else{
            sum+=Matrix[i][r2];
        }
    }

    

    return sum;
    
    

}

int main(){
    int n,m;
    int l1,r1,l2,r2;
    cout<<"Enter the row and column"<<endl;
    cin>>n>>m;
    vector <vector<int>>Matrix(n,vector<int>(m));

    cout<<"Enter the rectangle coodinate"<<endl;
    cin>>l1>>r1>>l2>>r2;


    cout<<"Enter the matrix"<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>Matrix[i][j];
        }
    }
    
    int sum=rectangleSum(Matrix,l1,r1,l2,r2);
    cout<<"Sum of the entered value is "<<sum<<endl;


   





    return 0;
}