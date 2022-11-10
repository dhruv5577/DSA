#include <bits/stdc++.h>
using namespace std;

int quicksort(int arr[], int low, int high)

{
    if (low >= high)
        return 0;

    int mid = (low + high) / 2;
    int p = arr[mid];
    int i = low, j = high;
    int temp;
    while (i < j)
    {
        if (arr[i] >= p && arr[j] <= p)
        {
            temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            i++;
            j--;
        }
        else
        {
            i++;
        }
    }
    quicksort(arr, low, mid);
    quicksort(arr, mid + 1, high);
}

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << (arr[i]) << endl;
}

int main()
{

    int arr[] = {6, 1, 4, 7, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    quicksort(arr, 0, size - 1);
    print(arr, size);
}