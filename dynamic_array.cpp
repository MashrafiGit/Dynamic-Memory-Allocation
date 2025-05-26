#include <bits/stdc++.h>
using namespace std;
int main()
{
    // static memory array
    // int a[5];

    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> a[i];
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << a[i] << " ";
    // }

    // heap memory dynamic array
    int *a = new int[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}