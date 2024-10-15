#include<iostream>
using namespace std;
int main()
{
    int n,max=0,x;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        if(x>max)
        {
            max=x;
        }
    }
    cout << max;
}