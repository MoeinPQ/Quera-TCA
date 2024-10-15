#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cin >> n >> m;
    int firstDuring[2*n] , secondDuring[2*m] , firstDays[30] , secondDays[30],firstHowManyDays=0,secondHowManyDays=0;

    for(int i=0;i<2*n;i++)
    {
        cin >> firstDuring[i];
    }    

    for(int i=0;i<2*m;i++)
    {
        cin >> secondDuring[i];
    }

    int l=0;

    // cout << "line 21" << endl;

    for(int i=0 ; i<2*n ; i+=2)
    {
        
        for(int j=firstDuring[i] ; j<=firstDuring[i+1];j++)
        {
            firstDays[l] = j;
            l++;
            firstHowManyDays++;
            
        }
        
    }

    // cout << "chera nemiraghsi";
    // cout.flush();

    int f=0;

    for(int i=0;i<2*m;i+=2)
    {
        for(int j=secondDuring[i] ; j<=secondDuring[i+1];j++)
        {
            secondDays[f] = j;
            f++;
            secondHowManyDays++;
        }
    }


    int k=0;
    for(int i=0;i<firstHowManyDays;i++)
    {
        for (int j = 0; j < secondHowManyDays; j++)
        {
            if( firstDays[i] == secondDays[j])
                {
                    k++;
                }
        }
        
        
    }

    cout << k;


}


// hal shode.