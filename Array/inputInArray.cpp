#include<iostream>
using namespace std;

int main(){
    char vowels[5];
    cout<<"Enter the vowels only"<<endl;
    // for(int i=0;i<5;i++){
    //     cin>>vowels[i];
    // }


    for(char &elements:vowels){
        cin>>elements;
    }

    cout<<"You have enterd"<<endl;

    for(int i=0;i<(sizeof(vowels)/sizeof(vowels[0]));i++){

        cout<<vowels[i]<<endl;
    }





    return 0;
}