#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,k=1,w=0,R,p,t=0,max=0,max2=0,max3=0;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        if(a[i]>max)
        {
            max=a[i];
            w=i;
        }
    }
        p=w;
        R=w;
    
    while((k>0)||(t<n-1))
    {
    for(int i=0;i<p;i++)
    {
        if(a[i]>max2)
        {
            max2=a[i];
            k=i;
        }
    }
    for(int i=n-1;i>R;i--)
    {
        if(a[i]>max3)
        {
            max3=a[i];
            t=i;
        }
    }
    for(int i=k+1;i<p;i++)
    {
        sum+=(max2-a[i]);
    }
    for(int i=t-1;i>R;i--)
    {
        sum+=(max3-a[i]);
    }
    max2=0;
    max3=0;
    p=k;
    R=t;
}
    cout << sum;
}