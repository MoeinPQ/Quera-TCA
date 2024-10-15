#include<iostream>
using namespace std;
int main()
{
    long int f,x,y,h,sum=0,n,min=100,k=0;
    cin >> n;
    cin >> x;
    cin >> y;
    int array[n];
    for(int i=0;i<n;i++)
    {
        cin >> array[i];
        if(array[i]<min)
        {
            min=array[i];
            f=i;
        }
    }
        // if(min<x)
        // {
        // cout << "NO" ;
        // return 0;
        // }

        h= min / x;
        h*=y;
        for(int i=0 ; i<n;i++)
        {
            // if(array[i]!=min)
            if(i!=f)
            while(array[i]<100)
            {
                array[i]+=y;
                h-=y;
            }
        }
        // sum= (100-min)/y;
        // sum *=y;
        // h+=sum;

    if(h>=0)
    cout << "YES";
    else cout << "NO";
}

// hal shode.