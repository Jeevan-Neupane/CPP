#include<iostream>
#include<vector>
using namespace std;

void Transpose(vector <vector<int>>&v){
    vector <vector<int>> vec;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            vec[j][i]=v[i][j];
        }

    }
    cout<<"Hello from functioin";
     for(int i=0;i<vec.size();i++){
        for(int j=0;j<v[0].size();j++){
           
            cout<<vec[i][j]<<" ";

        }
        cout<<endl;
    }
}

int main(){
    int n,m;
    cout<<"Enter the number of rows and columns"<<endl;
    cin>>n>>m;
    vector <vector<int>> vec(n,vector<int>(m));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"Enter "<<j<<" Element of vector "<<i<<endl;
            cin>>vec[i][j];

        }
        cout<<"Enter another Vector"<<endl;
    }
    Transpose(vec);

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           
            cout<<vec[i][j]<<" ";

        }
        cout<<endl;
    }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
           
    //         cout<<vec[i][j]<<" ";

    //     }
    //     cout<<endl;
    // }



    return 0;
}