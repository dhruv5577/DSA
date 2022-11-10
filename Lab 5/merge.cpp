#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int start, int mid, int end)
{

    int len1 = mid - start + 1;

    int len2 = end - mid;

    int leftArr[len1], rightArr[len2];

    for (int i = 0; i < len1; i++)
        leftArr[i] = arr[start + i];

    for (int j = 0; j < len2; j++)
        rightArr[j] = arr[mid + 1 + j];

    int i, j = 0;

    int k = start;

    while (i < len1 && j < len2)
    {
        if (leftArr[i] <= rightArr[j])
        {
            arr[k] = leftArr[i];
            i++;
        }
        else
        {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    while (i < len1)
    {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    while (j < len2)
    {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int start, int end)
{
    if (start < end)
    {

        int mid = start + (end - start) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << (arr[i]) << endl;

    cout << endl;
}

int main()
{
    int arr[] = {6, 1, 4, 7, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, size - 1);
    print(arr, size);
}
