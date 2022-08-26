#include <bits/stdc++.h>
using namespace std;
void insert(int arr[], int a, int e, int s)
{
    int narr[s + 1];

    for (int i = 0; i < a - 1; i++)
        narr[i] = arr[i];

    narr[a - 1] = e;

    for (int i = 0; i < s + 1; i++)
        cout << narr[i] << " ";

    for (int i = a; i <= s; i++)
        narr[i] = arr[i - 1];
}
int main()
{

    int arr[] = {4, 5, 7, 8, 2, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    insert(arr, 3, 5, n);
    return 0;
}