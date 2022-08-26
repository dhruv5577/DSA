#include <bits/stdc++.h>
using namespace std;

void rep(int arr[], int p, int a, int b)
{
    if (p <= b)
    {
        arr[p - 1] = a;
        for (int i = 0; i < b; i++)
            cout << arr[i] << " ";
    }
    else
        cout << -1;
}
int main()
{

    int arr[] = {4, 5, 2, 7, 8, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    rep(arr, 4, 8, n);
    return 0;
}