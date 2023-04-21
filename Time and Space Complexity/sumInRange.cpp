#include <iostream>
#include <vector>
using namespace std;

int sumInRangeForLoop(int x, int y)
{
        //! This above process is not good for large value of y because it will take more time to execute for loop
    int sum = 0;//^Sixth instruction
    //?Run for n=x-y+1 times
    for (int i = x; i <= y/*First Operation*/; i++/*Third Operation Operation*/)
    {
        sum = sum + i;//Second Operation;
    // /?Number of operations=3n
    }
    cout << "Sum from for loop is " << sum<<endl;//^Fourth Operation
    return 0;//^Fifth operation

    //&Total number of instruction =3n+3;
}

int sumInRangeUsingFormula(int x,int y)
{
     //! So we can deduce it as Arithmetic progress and use formula

     //&This function will have about 10 execution whatever the value of the input number is 

     //!Constant instruction or operation
    int numberOfTerms = y - x + 1;
    int firstTerm = x;
    int sum=0;
   
    sum = (numberOfTerms / 2.0) * ((2 * firstTerm) + ((numberOfTerms - 1) * 1));
    cout << "The sum of number in between range x and y is from Formula " << sum<<endl;
    return 0;
}

int main()
{
    int x, y;
    cout << "Enter the value of x and y" << endl;
    cin >> x >> y;
    sumInRangeForLoop(x,y);
    sumInRangeUsingFormula(x,y);


   




    return 0;
}