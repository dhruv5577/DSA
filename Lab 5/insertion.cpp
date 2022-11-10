#include <bits/stdc++.h>
using namespace std;

void insertion(int arr[], int n)
{
    int i, key, j;

    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];

            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void print(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {4, 5, 2, 8, 6};

    int N = sizeof(arr) / sizeof(arr[0]);

    insertion(arr, N);
    print(arr, N);

    return 0;
}
