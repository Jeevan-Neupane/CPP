#include<iostream>
#include<vector>
using namespace std;

int MaximumOneRow(vector <vector<int>> &v){
    int maxNumberOfOne=INT16_MIN;
    int rowNumber=-1;
    int column=v[0].size();

    for(int i=0;i<v.size();i++){
        for(int j=0;j<column;j++){
            if(v[i][j]==1){
               int NumberOfOne=column-j;
               if(NumberOfOne>maxNumberOfOne){
                maxNumberOfOne=NumberOfOne;
                rowNumber=i;
               }
               break;
                

            }
        }
    }
    return rowNumber;

}

int main(){
    int n,m;
    cout<<"Enter the value of rows and colums"<<endl;
    cin>>n>>m;

    vector <vector<int>> vec(n,vector<int>(m));

    cout<<"Enter the vector";

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>vec[i][j];
        }
    }
    int row=MaximumOneRow(vec);
    cout<<"The maximum no of one is in "<<row<<endl;





    return 0;
}