#include <bits/stdc++.h>
using namespace std;

void findMax(int arr[], int size)
{
    int max = INT_MIN;
    int indexValue = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            indexValue = i;
        }
    }
    cout << "Maximum Number of given array is : " << max << "\n";
    cout << "index value of Maximum Number is : " << indexValue << "\n";
}

void findMin(int arr[], int size)
{
    int min = INT_MAX;
    int indexValue = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            indexValue = i;
        }
    }
    cout << "Minimum Number of given array is : " << min << "\n";
    cout << "index value of Minimum Number is : " << indexValue << "\n";
}

int main()
{
    int arr[] = {1, 2, 3, 8, 4, 9, -4, 2, 4, 7, 9};
    int size = sizeof(arr) / sizeof(int);
    findMax(arr, size);
    findMin(arr, size);
    return 0;
}