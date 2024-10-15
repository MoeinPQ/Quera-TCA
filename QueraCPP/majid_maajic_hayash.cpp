#include<iostream>
using namespace std;
int main()
{
    int j,w,min=101,n,k=101;
    cin >> n;
    int h[n];
    for(int i=0;i<n;i++)
    {
        cin >> h[i];
    }
    for(int i=0;i<n;i++)
    {
        w=0;
        for(j=0;j<n;j++)
        {
            if(h[i]==h[j])
            {
                w++;
            }
        }
        if(w==min)
        {
            if(h[i] < k)
                k=h[i];
        }else if(w<min)
        {
            k=h[i];
            min=w;
        }
    }
    cout << k;
}