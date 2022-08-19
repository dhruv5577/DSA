#include <bits/stdc++.h>
using namespace std;

int prodarray(int arr[], int n)
{
    if (n == 0)
        return 1;
    else
        return arr[n - 1] * prodarray(arr, n - 1);
}
int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << prodarray(arr, n);
}
