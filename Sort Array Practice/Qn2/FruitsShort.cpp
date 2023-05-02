#include<iostream>
#include<string.h>
using namespace std;

void selectionSort(char fruit[][60],int size){
    for(int i=0;i<size-1;i++){

        int minIndex=i;

        for(int j=i+1;j<size;j++){
            if(strcmp(fruit[minIndex],fruit[j])>0){
                minIndex=j;
            }
        }
        //&place the minimum 
        if(i!=minIndex){
        swap(fruit[i],fruit[minIndex]);

        }

    }

}

int main(){
    char fruit[][60]={"papaya","lime","waterlemon","apple","mango","kiwi"};
    int size=sizeof(fruit)/sizeof(fruit[0]);
     

     selectionSort(fruit,size);


     for(int i=0;i<size;i++){
        cout<<fruit[i]<<endl;
     }




    return 0;
}