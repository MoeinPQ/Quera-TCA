#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i,n,m=0,k=0;
    cin >> n;
    for ( i = n/2+1; i>0 ; i--)
    {
        cout << setw(i) << "*";
        k=0;
        while(m>k)
        {
            cout << "*";
            k++;
        }
        k=0;
        cout << setw(i) << "*";
        while(m>k)
        {
            cout << "*";
            k++;
        }
        cout << endl;
        m+=2;
    }
    m=n-3;
    k=0;
    for(int j=2;j<n/2+2;j++)
    {
        cout << setw(j) << "*";
        k=0;
        while(m>k)
        {
            cout << "*";
            k++;
        }
        k=0;
        cout << setw(j) << "*";
        while(m>k)
        {
            cout << "*";
            k++;
        }
        cout << endl;
        m-=2;        
    }
}