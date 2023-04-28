#include<iostream>
#include<vector>
using namespace std;

int MinimumValue(vector <int> &vec,int size){
    int minimum;
    if(size==1){
        return minimum=vec[0];

    }
    else{
        return minimum=vec[size]>MinimumValue(vec,size-1)?MinimumValue(vec,size-1):vec[size];
    }
}

int main(){
     int size;
    cout << "Size of an array is " << endl;
    cin >> size;
    vector<int> a(size);
    cout << "Enter the value of array" << endl;
    for (int i = 0; i < a.size(); i++)
    {
        cin >> a[i];
    }

    cout<<"Minimum value is "<<MinimumValue(a,size)<<endl;







    return 0;
}