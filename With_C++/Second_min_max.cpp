#include <iostream>
#include <climits>
using namespace std;

void findSecondMinMax(int arr[], int n)
{
    int min = INT_MAX, secondMin = INT_MAX;
    int max = INT_MIN, secondMax = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        // For minimum
        if (arr[i] < min)
        {
            secondMin = min;
            min = arr[i];
        }
        else if (arr[i] < secondMin && arr[i] != min)
        {
            secondMin = arr[i];
        }

        // For maximum
        if (arr[i] > max)
        {
            secondMax = max;
            max = arr[i];
        }
        else if (arr[i] > secondMax && arr[i] != max)
        {
            secondMax = arr[i];
        }
    }

    if (secondMin == INT_MAX)
        cout << "No second minimum (all elements may be equal or only one unique element)." << endl;
    else
        cout << "Second Minimum: " << secondMin << endl;

    if (secondMax == INT_MIN)
        cout << "No second maximum (all elements may be equal or only one unique element)." << endl;
    else
        cout << "Second Maximum: " << secondMax << endl;
}

int main()
{
    int arr[] = {10, 5, 20, 8, 20, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    findSecondMinMax(arr, size);

    return 0;
}
