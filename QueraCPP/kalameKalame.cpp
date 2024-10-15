#include<iostream>
using namespace std;
int main(){

    string word;
    int k = 1;
    cin >> word;
    for(int i=0; i < 6;i++){

        if((word[i] == 'o') || (word[i] == 'a') || (word[i] == 'u') || (word[i] == 'i') || (word[i] == 'e')){
            k*=2;
        }
    } 

    cout << k;
    
}

// hal shode.