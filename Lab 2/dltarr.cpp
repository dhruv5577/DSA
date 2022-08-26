#include <bits/stdc++.h>
using namespace std;
void dlt(int arr[], int a, int b)
{

    for (int i = a; i < b; i++)
        arr[i - 1] = arr[i];

    for (int i = 0; i < b - 1; i++)
        cout << arr[i] << " ";
}
int main()
{

    int arr[] = {6, 7, 3, 4, 5, 9};

    int n = sizeof(arr) / sizeof(arr[0]);

    dlt(arr, 1, n);
    return 0;
}