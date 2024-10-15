#include<iostream>
using namespace std;

// int shart1(int arays[],int number);
// int shart2(int arays[],int number);
// int shart3(int arays[],int number);

int main()
{
    int numbers;
    cin >> numbers;
    int araye[numbers];
    if(numbers<=3)
    {
        cout << "-1";
        return 0;
    }

    int w=0;

    if(numbers%2==0)
    {

    for(int i=1;i<(numbers/2);i++)
    {
        araye[w]= numbers-1;
        w++;
    }
    for(int i=1;i<(numbers/2);i++)
    {
        araye[w]= 2;
        w++;
    }
    araye[w]=3;
    w++;
    araye[w]= numbers-2;
    }
    

    if(numbers%2 != 0)
    {
        numbers=numbers-1;

    for(int i=1;i<(numbers/2);i++)
    {
        araye[w]= numbers-1;
        w++;
    }
    for(int i=1;i<(numbers/2);i++)
    {
        araye[w]= 2;
        w++;
    }
    araye[w]=3;
    w++;
    araye[w]= numbers-2;
    w++;
    araye[w]= numbers+1;

    }

    for(int i=0;i<numbers;i++)
    {
        cout << araye[i] << " ";
    }
}


// int shart1(int arays[],int number)
// {
//     int sum=0;
//     for(int i=0;i<number;i++)
//     {
//         sum+=arays[i];
//     }
//     if(sum == (number*(number+1))/2 )
//     {
//         return 1;
//     }
//     return 2;
// }

// int shart2(int arays[],int number)
// {
//     int sum2=0;
//     for(int i=0;i<n;i++)
//     {
//         sum2+= (arays[i] * arays[i]);
//     }
//     if(sum2 == (number*(number+1)*(2*number+1))/6 )
//     {
//         return 1;
//     }
//     return 2;
// }

// shart3(int arays[],int number)
// {
//     int sum3=0;
//     for(int i=0;i<n;i++)
//     {
//         sum3+= (arays[i] * arays[i] * arays[i]);
//     }
//     if(sum3 == (number*number*(number+1)*(number+1))/4)
//     {
//         return 1;
//     }
//     return 2;

// }
