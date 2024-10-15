#include<iostream>
using namespace std;
int main()
{
    int n,w=0;
    cin >> n;
    string a,b;
    cin >> a >> b;
    for(int i=0;i<n;i++)
        if(a[i]!=b[i])
            w++;
    cout << w;
}