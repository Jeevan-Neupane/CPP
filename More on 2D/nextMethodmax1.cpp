#include <iostream>
#include <vector>
using namespace std;

int MaximumOneRow(vector<vector<int>> &v)
{
    // int maxNumberOfOne=INT16_MIN;
    int rowNumber = -1;
    int leftMostOne = -1;
    int column = v[0].size();

    int j = column - 1;
    
    for (int i = 0; i < v.size(); i++)
    {
        while (j >= 0)
        {
            if (v[i][j] == 1)
            {

                leftMostOne = j;
                rowNumber=i;
            }
            if (v[i][j] == 0)
            {
                break;
            }

            j--;
        }
    }
    return rowNumber;
}

int main()
{
    int n, m;
    cout << "Enter the value of rows and colums" << endl;
    cin >> n >> m;

    vector<vector<int>> vec(n, vector<int>(m));

    cout << "Enter the vector";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> vec[i][j];
        }
    }
    int row = MaximumOneRow(vec);
    cout << "The maximum no of one is in " << row << endl;

    return 0;
}