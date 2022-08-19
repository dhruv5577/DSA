#include <bits/stdc++.h>

using namespace std;

// int fact(int n);
//     if (n==0||n==1)

//         return 1;

//     if (n<0)

//         return 0;

//     else

//         return n*fact(n-1);

// int ifact(int n){
//     if (n<0)
//         return 0;

//     int t=1,i;
//     for (int  i = 1; i <=n; i++)
//     {
//         t=t*i;

//     }
//     return t;
// }

int fib(int n)
{

    if (n == 0)
        return 0;
    if (n == 1 || n == 2)
        return 1;
    else
        return fib(n - 2) + fib(n - 1);
}

int ifib(int n)
{
    int a = 0;
    int b = 1;
    int sum = 0;

    for (int i = 2; i < n; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
    }
    return sum;
}

int main()
{
    cout << ifib(5);
}
