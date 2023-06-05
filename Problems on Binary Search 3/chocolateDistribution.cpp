#include <iostream>
#include <vector>
using namespace std;

int SumOfAllChocolates(vector<int> &Vector)
{
    int size = Vector.size();
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += Vector[i];
    }
    return sum;
}
bool canDisChoco(vector<int> &Vector, int mid, int student)
{
    int numberOfStudent = 1;
    int sum = 0;
    for (int i = 0; i < Vector.size(); i++)
    {
        if (Vector[i] > mid)
        {
            return false;
        }
        if (sum + Vector[i] > mid)
        {
            numberOfStudent++;
            sum = Vector[i];

            if (numberOfStudent > student)
            {
                return false;
            }
        }else{
            sum+=Vector[i];
        }
    }
    return true;
};
int MinimumMax(vector<int> &Vector, int student)
{

    int lowest = Vector[0];
    int highest = SumOfAllChocolates(Vector);
    
    int ans = -1;
    while (lowest <= highest)
    {
        int mid = lowest + (highest - lowest) / 2;
        if (canDisChoco(Vector, mid, student))
        {
            ans = mid;
            highest = mid - 1;
        }
        else
        {
            lowest = mid + 1;
        }
    }
    return ans;
}

int main()
{

    vector<int> Box{12,34,67,90};
    int numberOfBox, numberOfStd;
    // cout << "Enter the number of boxes" << endl;
    // cin >> numberOfBox;
    // cout << "Enter the number of students" << endl;
    // cin >> numberOfStd;

    // cout << "Enter the number of chocolate in asceding order " << endl;
    // for (int i = 0; i < numberOfBox; i++)
    // {
    //     int chocolateInBox;
    //     cout << "Enter the number of chocolate in box " << i + 1 << endl;
    //     cin >> chocolateInBox;
    //     Box.push_back(chocolateInBox);
    // }
    
    numberOfStd=2;

    int minmax = MinimumMax(Box, numberOfStd);
    cout << minmax << endl;

    return 0;
}