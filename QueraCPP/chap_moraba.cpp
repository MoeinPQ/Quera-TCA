#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        if((i==1) || (i==n))
        {
            for(int j=0;j<n;j++)
            {
                cout << "*";
            }
        }else
        {
            cout << "*" << setw(n-1) << "*";
        }
        cout << endl;
    }
}