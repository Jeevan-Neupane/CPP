#include<iostream>
using namespace std;

int main(){
    int array[]={2,3,5,1};

    int size=4;

    for(int i=0;i<size;i++){
        int CV=i;
        for(int j=i+1;j<size;j++){
            if(array[i]>array[j]){
                CV=j;
                


            }


        }
        if(CV!=i){
        swap(array[i],array[CV]);

        }
    }

    for(int i=0;i<size;i++){
        cout<<array[i]<<endl;
    }



    return 0;
}