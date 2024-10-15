#include<iostream>
using namespace std;
int main()
{
    int n,i=1;;
    cin >> n;
    for(int j=1;j<=n;j++)
    {
        i*=j;
    }
    cout << i;
}