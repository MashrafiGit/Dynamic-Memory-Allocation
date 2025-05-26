#include <bits/stdc++.h>
using namespace std;
int *pointer;
void fun()
{
    // int x = 10;
    // pointer = &x;

    int *x = new int;
    *x = 10;
    pointer = x;
    cout << *pointer << endl;
    return;
}

int main()
{
    int x = 10; // stack memory variable

    int *p = new int; // heap memory variable
    *p = 100;

    fun();

    // cout << x << endl
    //      << *p << endl;

    // cout << *pointer << endl;


    cout << *pointer << endl;

    return 0;
}