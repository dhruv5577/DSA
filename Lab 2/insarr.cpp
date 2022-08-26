#include <bits/stdc++.h>
using namespace std;
void ins(int arr[], int a, int b)
{
    int arr[b + 1];

    arr[b] = a;

    for (int i = 0; i < b + 1; i++)
        cout << arr[i] << "  ";
    for (int i = 0; i < b; i++)
        arr[i] = arr[i];
}
int main()
{

    int arr[] = {5, 7, 3, 4, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    ins(arr, 2, n);
    return 0;
}