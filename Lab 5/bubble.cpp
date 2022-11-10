#include <bits/stdc++.h>
using namespace std;

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

void print(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int main()
{
    int arr[] = {7, 9, 3, 5, 1};

    int N = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, N);

    cout << "Sorted array: \n";

    print(arr, N);
    return 0;
}
