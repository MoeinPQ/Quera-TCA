#include<iostream>
using namespace std;
int main()
{
    int n,k,sum=0;
    int fulOfjam,remainderOfJam;
    cin >> n >> k;
    int numberOfJam[n];
    for(int i=0;i<n;i++)
    {
        cin >> numberOfJam[i];
        sum+=numberOfJam[i];
    }
    fulOfjam=sum/k;
    remainderOfJam=sum%k;
    if(remainderOfJam == 0)
        cout << n-fulOfjam;
    else
        cout << (n-fulOfjam)-1;


}