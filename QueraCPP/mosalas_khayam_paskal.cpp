#include<iostream>
using namespace std;
int fact(int n)
{
    int p=1;
    for(int i=1;i<=n;i++)
    p*=i;
    return p;
}

int main()
{
    long long int n;
    cin>>n;
    cout<<1<<endl;
    for(int j=1;j<=n-1;j++)
    {
       for(int i=0;i<=j;i++)
        {
           cout<<fact(j)/(fact(i)*fact(j-i))<<" ";
        }
       cout<<endl;
    }
}