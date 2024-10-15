#include<iostream>
using namespace std;
int main()
{
    int n,m,k=0;
    cin >> n >> m;
    for(int i=0;i<n;i++)
    {
        string f;
        cin >> f;
        for(int j=0;j<m;j++)
        {
            if(f[j]=='*')
            {
                k++;
            }
        }
    }
    cout << k;
    return 0;
}