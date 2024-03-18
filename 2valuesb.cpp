//Write a C++ program to compute the sum of two given integer values. If the two values are the same, then return triple their sum.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,sum;
    cin>>a;
    cin>>b;
    if (a==b)
    {
        sum=(a+b)*3;
        cout<<sum;
    }
    else
    {
        sum=a+b;
        cout<<sum;

    }
    return 0;
}
