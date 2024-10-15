#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int array[n][2],k=0;
    for(int i=0;i<n;i++)
    {
        cin >> array[i][0] >> array[i][1];
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

            if((array[i][0] != array[j][0]) || (array[i][1] != array[j][1])){
                if((array[i][0] >= array[j][0]) && (array[i][1] <= array[j][1])){
                    k++;
                    break;
                    
                }
            }
        }
    }
    // if(k%2==0)
    // k--;
    
    cout << n-k;

}