#include<iostream>
using namespace std;
int main()
{
    int a,b,c,max=0;
    cin >> a >> b >> c;
    int enterMunute[3],exitMinute[3];
    for(int i=0;i<3;i++)
    {
        cin >> enterMunute[i];
        if(enterMunute[i] > max) max = enterMunute[i];
        cin >> exitMinute[i];
        if(exitMinute[i] > max)  max = exitMinute[i];
    }

    int loopout=0,nowAminute[3]={0,0,0},sum=0;

    for(int i=1;i<max;i++)
    {

        if( ( i >= enterMunute[0] ) && ( i < exitMinute[0]) )
        {
            nowAminute[0] = i;
        }else
        {
            nowAminute[0] = -1;
        }

        if( ( i >= enterMunute[1] ) && ( i < exitMinute[1]) )
        {
            nowAminute[1] = i;
        }else
        {
            nowAminute[1] = -2;
        }

        if( ( i >= enterMunute[2] ) && ( i < exitMinute[2]) )
        {
            nowAminute[2] = i;
        }else
        {
            nowAminute[2] = -3;
        }

        if ( (nowAminute[0] == nowAminute[1]) && (nowAminute[0] == nowAminute[2]))
        {
            sum+= (3*c);
        }else if( (nowAminute[0] == nowAminute[1]) || (nowAminute[0] == nowAminute[2]) || (nowAminute[2] == nowAminute[1]))
        {
            sum+= (2*b);
        }else if( (nowAminute[0] == i ) || (nowAminute[1] == i ) || (nowAminute[2] == i ) )
        {
            sum+= a;
        }
        

    }

    cout << sum;

}

// hal shode.