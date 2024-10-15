#include<iostream>
using namespace std;
int main()
{
    int sum=0,n,k;
    cin >> n >> k;
    int volum[n];
    for(int i=0;i<n;i++)
    {
        cin >> volum[i];
        sum += volum[i];
    }
    if(sum >= k)
    cout << "YES";
    else cout << "NO";
}

// hal shod