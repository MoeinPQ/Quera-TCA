#include<iostream>
using namespace std;
int main()
{
    int n,m,k=0;
    cin >> n >> m;
    int a [n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i=1;i<n-1;i++)
    {
        for(int j=1;j<m-1;j++)
        {
            if((((a[i][j]>a[i][j-1]) && (a[i][j]>a[i][j+1])) && ((a[i][j]<a[i-1][j]) && (a[i][j]<a[i+1][j])))
             || (((a[i][j]<a[i][j-1]) && (a[i][j]<a[i][j+1])) && ((a[i][j]>a[i-1][j]) && (a[i][j]>a[i+1][j]))))
             {
                 k++;
             }
        }
    }
    cout << k;
}