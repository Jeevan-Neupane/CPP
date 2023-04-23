// A C++  program to count all possible paths
// from top left to bottom right
//*This was imported from geeksforgeeks to check my answer
 
#include <bits/stdc++.h>
using namespace std;
 

int numberOfPaths(int m, int n)
{
    // If either given row number is first or given column
    // number is first
    if (m == 1 || n == 1)
        return 1;
 
    // If diagonal movements are allowed then the last
    // addition is required.
    return numberOfPaths(m - 1, n)
           + numberOfPaths(m, n - 1);
    // + numberOfPaths(m-1, n-1);
}
 
// Driver code
int main()
{
    cout << numberOfPaths(4, 4);
    return 0;
}