#include<iostream>
using namespace std;
int main()
{
    int M , N;
    cin >> N >> M;
    int safarha[N][N] , mabdaMaghsad[M][2] , sum=0;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++) cin >> safarha[i][j];
    }

    for(int i=0;i<M;i++)
        for(int j=0;j<2;j++) cin >> mabdaMaghsad[i][j];

        for(int i=0;i<M;i++)
        {
            sum += safarha[ mabdaMaghsad[i][0]-1 ][ mabdaMaghsad[i][1]-1 ];
        }
        cout << sum;
}

// hal shode.