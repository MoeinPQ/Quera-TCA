#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cin >> n >> m;
    string a[n][2];
    string b[m];
    for(int i=0;i<n;i++)
    {
        cin >> a[i][0] >> a[i][1];
    }
    for(int i=0;i<m;i++)
    {
        cin >> b[i];
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(b[i]==a[j][0])
            {
                cout << a[j][1] << " ";
            }
        }
        cout <<"kachal!" << " ";   
    }

}
// fenito