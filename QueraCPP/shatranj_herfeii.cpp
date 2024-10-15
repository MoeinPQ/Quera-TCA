#include<iostream>
using namespace std;
int main()
{
    int a[6];
    for(int i=0;i<6;i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<6;i++)
    {
        if(i<=1)
        {
            cout << 1-a[i] << " ";
        }else if(i<=4)
            cout << 2-a[i] << " ";
        else
            cout << 8-a[i] << " ";
    }
}