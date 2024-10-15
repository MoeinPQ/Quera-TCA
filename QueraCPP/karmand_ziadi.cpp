#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string employee[n+1],stringha,alephabets;
    for(int i=0;i<=n;i++)
    {
        alephabets=' ';
        getline(cin,stringha);
        for(int t=0;t<stringha.length();t++)
        {
            if(stringha[t] == ' ')
            break;
            alephabets+=stringha[t];

        }
        employee[i]=alephabets;
    }


    int max=1,l=0;
    for(int i=0;i<n+1;i++)
    {
        l=0;
        for(int j=0;j<n+1;j++)
        {
            if(employee[i] == employee[j])
            l++;
        }
        if(l>max)
        max = l;
    }

    cout << max;
}

// hal shode.