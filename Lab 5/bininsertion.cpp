#include <bits/stdc++.h>
using namespace std;

int binsearch(int arr[], int item, int low, int high)
{
    if (high <= low)

        return (item > arr[low]) ? (low + 1) : low;

    int mid = (low + high) / 2;

    if (item == arr[mid])
        return mid + 1;

    if (item > arr[mid])
        return binsearch(arr, item, mid + 1, high);

    return binsearch(arr, item, low, mid - 1);
}
void bininsertsort(int arr[], int n)
{
    int i, index, j, k, selected;
    for (i = 1; i < n; ++i)
    {
        j = i - 1;
        selected = arr[i];
        index = binsearch(arr, selected, 0, j);
        while (j >= index)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = selected;
    }
}
int main()
{
    int arr[] = {1, 4, 6, 7, 3, 9, 2};
    int n = sizeof(arr) / sizeof(arr[0]), i;

    bininsertsort(arr, n);

    cout << "Sorted array is : \n";

    for (i = 0; i < n; i++)
        cout << arr[i] << "\t";
    return 0;
}