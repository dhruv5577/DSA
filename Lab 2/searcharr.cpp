#include <bits/stdc++.h>
using namespace std;
int ser(int arr[], int a, int n)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == a)
            return (i + 1);
    }
    return -1;
}
int main()
{

    int arr[] = {4, 5, 2, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int a = 6;
    cout << ser(arr, a, n);
    return 0;
}