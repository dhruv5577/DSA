#include <bits/stdc++.h>
using namespace std;

int gmax(int array[], int n)
{
    int max = array[0];
    for (int i = 1; i < n; i++)
        if (array[i] > max)
            max = array[i];
    return max;
}

void countSort(int array[], int size, int place)
{
    const int max = 10;
    int ot[size];
    int count[max];

    for (int i = 0; i < max; ++i)
        count[i] = 0;

    for (int i = 0; i < size; i++)
        count[(array[i] / place) % 10]++;

    for (int i = 1; i < max; i++)
        count[i] += count[i - 1];

    for (int i = size - 1; i >= 0; i--)
    {
        ot[count[(array[i] / place) % 10] - 1] = array[i];
        count[(array[i] / place) % 10]--;
    }

    for (int i = 0; i < size; i++)
        array[i] = ot[i];
}

void radix(int array[], int size)
{
    int max = gmax(array, size);

    for (int place = 1; max / place > 0; place *= 10)
        countSort(array, size, place);
}

void print(int array[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}

int main()
{
    int array[] = {4, 6, 2, 8, 9};
    int n = sizeof(array) / sizeof(array[0]);

    radix(array, n);

    print(array, n);
}