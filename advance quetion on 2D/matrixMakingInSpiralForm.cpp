#include<iostream>
#include<vector>
using namespace std;

vector <vector<int>> spiralVector(int size){
    vector <vector<int>> Vec(size,vector<int>(size));;
    
    int top=0;
    int bottom=size-1;
    int left=0;
    int right=size-1;
    int direction=0;

    int value=1;
    while(top<=bottom && left<=right){

        if(direction==0){
            for(int col=left;col<=right;col++){
                Vec[top][col]=value;
                value++;

            }
            top++;
        }
       else if(direction==1){
            for(int row=top;row<=bottom;row++){
                Vec[row][right]=value;
                value++;

            }
            right--;
        }
      else  if(direction==2){
            for(int col=right;col>=left;col--){
                Vec[bottom][col]=value;
                value++;

            }
            bottom--;
        }
       else{
            for(int row=bottom;row>=top;row--){
                Vec[row][left]=value;
                value++;

            }
            left++;
        }
        direction=(direction+1)%4;

    }
    
    return Vec;

}

int main(){
    int n;
    cout<<"Enter the size of matrix"<<endl;
    cin>>n;
    vector<vector<int>> Vec(n,vector<int>(n));

    Vec=spiralVector(n);

    cout<<"I am back"<<endl;

    for(int i=0;i<Vec.size();i++){
        for(int j=0;j<Vec[i].size();j++){
            cout<<Vec[i][j]<<" ";

        }
        cout<<endl;
    }




  



    return 0;
}