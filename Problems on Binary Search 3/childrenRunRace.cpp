#include <iostream>
#include <vector>
using namespace std;

bool isMax(vector <int> Vector,int mid,int numberOfStudent){
    
    if(numberOfStudent==1){

    }


}

int Maxmin(vector<int> &Vector,int child){
    int low=Vector[0];
    int size=Vector.size();
    int high=Vector[size-1]-Vector[0];

    while(low<=high){
        int mid=(low+high)/2;

        if(isMax(Vector,mid,child)){
            
        }
    }

};



int main()
{
    vector<int> Vector{1, 2, 4, 8, 9};
    int numberOfChild = 3;

    int distance= Maxmin(Vector,numberOfChild);



    return 0;
}