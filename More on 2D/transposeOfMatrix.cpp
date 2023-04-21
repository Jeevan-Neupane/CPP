#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void Transpose(vector <vector<int>> &vec){
    cout<<"hello from function"<<endl;
   int n=vec.size();
  
  

  for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
        swap(vec[i][j],vec[j][i]);
     
      
    }
  }  

  for(int i=0;i<n;i++){
    reverse(vec[i].begin(),vec[i].end());
  }
  return;
}

int main(){
    int n,m;
    cout<<"Enter the value of rows and columns"<<endl;
    cin>>n;
    cout<<endl;
    cin>>m;
    vector <vector<int>> vec(n,vector<int>(m));

    cout<<"Enter vector"<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>vec[i][j];
        }
        
    }

    cout<<"Entering into  function"<<endl;
    Transpose(vec);


   

   cout<<"Transpose of Vector"<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
        
    }

    




    return 0;
}