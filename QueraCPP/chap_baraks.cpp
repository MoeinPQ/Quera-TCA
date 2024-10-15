#include<iostream>
using namespace std;
int main()
{
    int i=1000,m[i],k=0;
    cin >> m[k];
    while(m[k]!=0)
    {
        k++;
        cin >> m[k];
    }
    for(int j=k-1;j>=0;j--)
    {
        cout << m[j] << endl;
    }
}