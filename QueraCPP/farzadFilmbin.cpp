#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string movieName[n];
    cin.ignore();
    for(int i=0;i<n;i++)
    {
        getline(cin,movieName[i]);
    }
    for(int i=0;i<n;i++)
    {
        int l=0;
        for(int j=0 ; j<movieName[i].length() ; j++)
        {
            if(l == 0)
            {
                if( ((movieName[i][j]) >=97) && ((movieName[i][j]) <=122) )
                {
                    movieName[i][j] -=32 ; 
                }
                l++;
            }else
            {
                if(movieName[i][j] == ' ')
                {
                    l=0;
                    continue;
                }
                else if( ( (movieName[i][j]) >= 65 ) && ((movieName[i][j]) <= 90 ) )
                {
                    movieName[i][j] = movieName[i][j] +=32;
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout << movieName[i] << endl;
    }

}

// hal shode.