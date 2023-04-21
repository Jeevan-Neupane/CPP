#include<iostream>
#include<vector>
using namespace std;


void SpiralMatrixOutput(vector <vector<int>>&Vec){
  
    int top=0;
    int bottom=Vec.size()-1;
    int left=0;
    int right=Vec[0].size()-1;

    int direction=0;

    while(top<=bottom && left<=right){
        //!For moving from left to right 
        if(direction==0){
            for(int col=left;col<=right;col++){
                cout<<Vec[top][col]<<" ";
            }
            top++;

        }
        //!top to bottom
        else if(direction==1){
             for(int row=top;row<=bottom;row++){
                cout<<Vec[row][right]<<" ";
            }
            right--;


        }
        // !right to left
        else if(direction==2){
             for(int col=right;col>=left;col--){
                cout<<Vec[bottom][col]<<" ";
            }
            bottom--;


        }
        //!bottom to top
        else{
             for(int row=bottom;row>=top;row--){
                cout<<Vec[row][left]<<" ";
            }
            left++;


        }
    direction=(direction+1)%4;
    }
  
    cout<<endl;
}

int main(){
    int row,col;
    cout<<"Enter the number of row"<<endl;
    cin>>row;
    cout<<"Enter the number of  column"<<endl;
    cin>>col;
    vector <vector<int>>Vec(row,vector<int>(col));

    cout<<"Enter the matrix of size"<<row<<"*"<<col<<endl;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>Vec[i][j];
        }
    }
    cout<<"Result from spiral"<<endl;
    SpiralMatrixOutput(Vec);



    cout<<"Result from spiral is ended"<<endl;


    cout<<"You have entered this matrix"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<Vec[i][j]<<" ";
        }
        cout<<endl;
    }



    return 0;
}