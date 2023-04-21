#include<iostream>
using namespace std;

int main(){
    int day;
    char alphabet;
    cout<<"Enter the day number";
    cin>>day;
    cout<<"Enter any of a-z";
    cin>>alphabet;
    switch (day)
    {
    case 1:
        cout<<"Sunday";
        break;
    case 2:
        cout<<"Monday";
        break;
    case 3:
        cout<<"Tuesday";
        break;
    case 4:
        cout<<"Wednesday";
        break;
    case 5:
        cout<<"Thrusday";
        break;
    case 6:
        cout<<"Friday";
        break;
    case 7:
        cout<<"Saturday";
        break;
    
    default:
        cout<<"Please Enter the valid number";
        break;
    }
    switch (alphabet)
    {
    case 'a':
        cout<<"vowel";
        break;
    case 'e':
        cout<<"vowel";
        break;
    case 'i':
        cout<<"vowel";
        break;
    case '0':
        cout<<"vowel";
        break;
    case 'u':
        cout<<"vowel";
        break;
   
    
    default:
        cout<<"Constunant";
        break;
    }



    return 0;
}