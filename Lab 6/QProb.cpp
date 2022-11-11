#include <bits/stdc++.h>

using namespace std;

void add(int a[], int J, int val)
{
    int i = 0, HOME = val;

    while (a[(HOME + i * i) % J] != 0)

        i++;
    a[(HOME + i * i) % J] = val;
}

bool search(int a[], int j, int val)
{
    int HOME = val;
    int i = 0;
    while (a[(HOME + i * i) % j] != 0)

    {
        if (a[(HOME + i * i) % j] == val)

            return true;
        i++;
    }

    return false;
}

void print(int a[], int n)
{
    for (int i = 0; i < n; i++)

        cout << a[i] << "   ";

    cout << endl;
}

void constrain(int arr[], int J, int val)
{
    if (search(arr, J, val))

        cout << "RIGHT" << endl;

    else

        cout << "WRONG" << endl;
}
int main()
{
    int J = 17;

    int arr[J] = {0};

    vector<int> e = {133, 88, 150, 92, 221, 174, 88, 105};

    for (int i = 0; i < e.size(); i++)

        add(arr, J, e[i]);
    print(arr, J);

    constrain(arr, J, 105);
    constrain(arr, J, 150);
    constrain(arr, J, 174);

    int J1 = 37;
    int arr1[J1] = {0};

    vector<int> v = {133, 150, 151, 187, 88, 250, 170, 134, 135, 207};
    for (int i = 0; i < v.size(); i++)

        add(arr1, J1, v[i]);

    print(arr1, J1);

    constrain(arr1, J1, 105);

    constrain(arr1, J1, 150);
    constrain(arr1, J1, 174);
}