#include<iostream>
using namespace std;
int main()
{
    int sum=1,n,i;
    cin >> n;
    for(i=2;i<=(n/2);i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    if(sum==n)
    {
        cout << "YES";
    }else
    {
        cout << "NO";
    }
}