#include <iostream>
using namespace std;

int main()
{
    int array[][4] = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int targetEl=34;

    int row = sizeof(array) / sizeof(array[0]);
    int col = sizeof(array[0]) / sizeof(array[0][0]);
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(targetEl==array[i][j]){
                cout<<"Target element is found in row "<<i+1<<" and col "<<j+1<<endl;
            }
           
        }
       
    }

    return 0;
}