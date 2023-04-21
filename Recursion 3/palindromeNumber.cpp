#include<iostream>
#include<vector>
using namespace std;

bool checkPalindrome(int num,int *ptr){

    if(num>=0 && num<=9){
      int lastDigitofPtr=*ptr%10;
      *ptr/=10;

      return num==lastDigitofPtr;

    }
    

    bool result=(checkPalindrome(num/10,ptr) && (num%10)==((*ptr)%10));
    (*ptr)/=10;
    return result;


   
}

int main(){
    int number=2122;
    int temp=number;
    cout<<"Jeevan Neupane";
    bool value=checkPalindrome(number,&temp);
    cout<<value<<endl;


    






    return 0;
}