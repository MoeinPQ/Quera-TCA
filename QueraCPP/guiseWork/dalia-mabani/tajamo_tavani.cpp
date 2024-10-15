#include<iostream>
using namespace std;
int main(){
    int n,k,j=0;
    cin >> n >> k;
    unsigned long array[n];
    for(int i=0;i<n;i++){

        cin >> array[i];
    }

    for(int i=0;i<n;i++){

        if(array[i] == 0){
            j++;
        continue;    
        }
        
        break;
        // cin >> array[i];
    }

    if(j == n)
    {
        cout << "YES";
        return 0;
    }
    j=0;



    if(n>4){
        cout << "NO";
        return 0;
    }
  

    for(int i=0;i<n;i++){
        for(int t=i+1;t<n;t++){

            if(array[i] == array[t]){
                if(array[i] == 0)
                continue;
                cout << "NO";
                return 0;
            }

        }
    }

   
    // (array[i] == array[n-2])


//   if(n==2){

//     for(int i=0;i<n;i++){
//         if((array[n-2] == array[i]))
//         {
//             if((array[i] == 0))
//             continue;
//             cout << "NO";
//             return 0;
//         }
//     }
//   }

    

    j=0;

    for(int i=0;i<n;i++){
        if((array[i]%k == 0) || (array[i]%k == 1)){
                j++;
        }
    }


    if(j==n)
    {
        cout << "YES";
        return 0;
    }


     for(int i=0;i<n;i++){
        if(array[n-2] == array[i])
        {
            if((array[i] == 0) )
            continue;
            cout << "NO";
            return 0;
        }
    }


}