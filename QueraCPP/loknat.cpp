#include<iostream>
using namespace std;
int main(){
    int letterF = 0;
    int letterL = 0;
    int letterD = 0;
    int letterT = 0;
    string letter;
    cin >> letter;
    for(int i=0;i<letter.length();i++){
        if(letter[i] == 'F') letterF++;
        else if(letter[i] == 'L') letterL++;
        else if(letter[i] == 'D') letterD++;
        else if(letter[i] == 'T') letterT++;
    }
    int sum = letterF + letterL + letterD + letterT;
    int result = 1;
    for(int i=0;i<sum;i++){
        result*=2;
    }
    cout << result;
}

// solved.