#include<iostream>
using namespace std;
int main()
{
    int number[4],k=0,member[4]={0,0};
    for(int i=0;i<4;i++)
    {
        cin >> number[i];
    }
    while ( (number[0]!=0) && (number[1]!=0) && (number[2]!=0) && (number[3]!=0) )
    {
        for(int i=0;i<4;i++)
        {
            if( (number[0]==0) || (number[1]==0) || (number[2]==0) || (number[3]==0) )
            {
                break;
            }
            member[i]++;
            number[k]--;
            k+=2;
            k%=4;
        }
    }

    for(int i=0;i<4;i++)
    {
        cout << member[i] << " ";
    }
    
}


// hal shode.