#include<iostream>
using namespace std;
int main() 
{
    int n,p,w,x,k,i;
    cin >> n;
    cin >> x;
    cin >> k;
    string array[n];
    for(i=0;i<n;i++)
    {
        cin >> array[i];

    }
    w=(k+x-1)%n;
    cout << array[w];
    return 0;
}