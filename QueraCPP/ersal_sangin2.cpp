#include<iostream>
using namespace std;
int main()
{
    int m , n , days[30] , s , e, count=0;
    for(int i=0; i < 30; i++)
    {
        days[i]=0;
    }

    cin >> m >> n;
    for(int i=0; i<m+n; i++)
    {
        cin >> s >> e;
        for(int j=s-1; j<e; j++)
        {
            days[j]++;
        }
    }

    for(int i=0; i<30; i++)
    {
        if(days[i] == 2) count++;
    }

    cout << count;
}