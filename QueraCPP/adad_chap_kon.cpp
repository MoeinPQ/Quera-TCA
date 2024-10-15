#include<iostream> 
using namespace std;
int main()
{
    int n,s[100],m=0;
    cin >> n;
    while(n>0){//222
        s[m]=n%10;
        m++;
        n/=10;
    }
    for(int i=0;i<m;i++)
    {
        cout << s[i] << ": ";
        for (int j=0;j<s[i]-1;j++)
        {
            cout << s[i];
        }
        cout << endl;
    }
}
// Hal Shod 