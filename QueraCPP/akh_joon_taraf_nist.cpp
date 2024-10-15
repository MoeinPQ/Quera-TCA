#include<iostream>
using namespace std;
int main()
{
    int m=0,t,k=0,h[7]={0,0};
    string a[21];
    for(int i=0;i<3;i++)
    {
        cin >> t;
        for(int j=0;j<t;j++)
        {
            cin >> a[k];
            k++;
        }

    }
    for(int i=0;i<k;i++)
    {
        if(a[i]=="shanbe") h[0]++;
        else if(a[i]=="1shanbe") h[1]++;
        else if(a[i]=="2shanbe") h[2]++;
        else if(a[i]=="3shanbe") h[3]++;
        else if(a[i]=="4shanbe") h[4]++;
        else if(a[i]=="5shanbe") h[5]++;
        else if(a[i]=="jome") h[6]++;

        /*switch ((a[i]))
        {
        case "shanbe": h[0]++; break;
        case "1shanbe": h[1]++; break;
        case "2shanbe": h[2]++; break;
        case "3shanbe": h[3]++; break;
        case "4shanbe": h[4]++; break;
        case "5shanbe": h[5]++; break;
        case "jome": h[6]++; break;
        }*/
    }
    for(int i=0;i<7;i++)
    {
        if(h[i]==0)
        m++;
    }
    cout << m;

}