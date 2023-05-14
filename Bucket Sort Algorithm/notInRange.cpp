#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void bucketSort(float array[], int size)
{
    // for maxEl
    float maxEl = INT16_MIN;
    float minEl = INT16_MAX;

    for (int i = 0; i < size; i++)
    {
        maxEl = max(maxEl, array[i]);
        minEl = min(minEl, array[i]);
    }

    float range = (maxEl - minEl) / size;

    vector<vector<float>> bucket(size, vector<float>());

    for (int i = 0; i < bucket.size(); i++)
    {
        int index = (array[i] - minEl) / range;
        bucket[index].push_back(array[i]);
    }

    for (int i = 0; i < bucket.size(); i++)
    {
        sort(bucket[i].begin(), bucket[i].end());
    }

    int k = 0;
    for (int i = 0; i < bucket.size(); i++)
    {
        for (int j = 0; j < bucket[i].size(); j++)
        {
            array[k++] = bucket[i][j];
        }
    }
}

int main()
{
    float array[] = {6.13, 8.45, 0.12, 1.89, 4.75, 2.63, 7.85, 10.36};
    int size = sizeof(array) / sizeof(array[0]);

    bucketSort(array, size);
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }

    return 0;
}