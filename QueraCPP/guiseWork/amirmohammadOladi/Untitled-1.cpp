#include<iostream>
using namespace std;
int main(){
    int k,n;
    cin >> k;
    cin >> n;
    string a;
    int i;
    for(i=1 ; i<=n ; i++){
        a = a + to_string(i);
    }
    int f = k-1;
    cout << "output = "  << a[f];
}