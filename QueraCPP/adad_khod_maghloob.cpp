#include<iostream>
using namespace std;
int main()
{
    string k;
    cin >> k;
    int i,j,w=0;
    for(i=0,j= k.length()-1;i< k.length(),j>=0;i++,j--)
    {
        if(k[i]!=k[j])
        {
            w++;
        }
    }
    if(w==0)
    {
        cout << "YES"; 
    }else
    {
        cout << "NO";
    }
}