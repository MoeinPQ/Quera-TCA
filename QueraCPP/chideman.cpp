#include<iostream>
using namespace std;
int main()
{
    int ave,n,m,l=0,sum=0;
    cin >> n;
    int sotoon[n];
    for(int i=0;i<n;i++)
    {
        cin >> sotoon[i];
        sum+=sotoon[i];
    }
    ave = sum/n;
    for(int i=0;i<n;i++)
    {
        if(sotoon[i] > ave)
        {
            l+=(sotoon[i]-ave);
        }
    }
    cout << l;
}

// hal shode.