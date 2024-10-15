#include<iostream>
using namespace std;
int main()
{
    int n,l,w ;
    cin >> n;
    int wheight[n],max=0;
    for(int i=0;i<n; i++)
    {
        cin >> wheight[i];
        if(wheight[i]>max)
        {
            max=wheight[i];
            l=i;
        }    
    }
    cout << l+1;
}

// hal shode