#include <bits/stdc++.h>
using namespace std;

// bubble sort

void swap(int arr[], int i, int j)
{

    int temp = arr[i];

    arr[i] = arr[j];

    arr[j] = temp;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)

        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr, j, j + 1);
}

void printb(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {2, 1, 3, 4, 5}; // best case//
    int arr[] = {9, 7, 4, 3, 2}; // worst case//
    int N = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, N);
    cout << "Sorted array: \n";
    printb(arr, N);
    return 0;
}

// insertion sort
void insertion(int arr1[], int n)
{
    int i, key, j;

    for (i = 1; i < n; i++)
    {
        key = arr1[i];
        j = i - 1;

        while (j >= 0 && arr1[j] > key)
        {
            arr1[j + 1] = arr1[j];

            j = j - 1;
        }
        arr1[j + 1] = key;
    }
}

void printi(int arr1[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr1[i] << " ";
    cout << endl;
}

int main()
{
    int arr1[] = {1, 2, 3, 5, 4}; // best case//

    int arr1[] = {9, 7, 4, 3, 2};

    int N = sizeof(arr1) / sizeof(arr1[0]);

    insertion(arr1, N);
    printi(arr1, N);

    return 0;
}
