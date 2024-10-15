#include<iostream>
using namespace std;
int main()
{
    int n,l=0,k=1;
    cin >> n;
    int f=0,j=0;
    for(int i=1;i<=n-1;i++)
    {
        if(k == 1)
        {
            if(f<0) f*=-1;
            f++;

        }else if(k==2)
        {
            if(j<0) j*=-1;
            j++;
        }else if(k == 3)
        {
            f*=-1;
        }else if(k == 4)
        {
            j*=-1;
            k=0;
        }
        k++;

    }

    cout << f << " " << j;
}