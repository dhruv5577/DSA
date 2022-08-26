#include <bits/stdc++.h>
using namespace std;
void ibg(int arr[], int a, int b)
{
    int aarr[b + 1];
    aarr[0] = a;

    for (int i = 0; i < b + 1; i++)
        cout << aarr[i] << " ";

    for (int i = 1; i < b + 1; i++)
        aarr[i] = arr[i - 1];
}
int main()
{

    int arr[] = {5, 2, 10, 1, 7, 8};

    int n = sizeof(arr) / sizeof(arr[0]);
    ibg(arr, 1, n);

    return 0;
}