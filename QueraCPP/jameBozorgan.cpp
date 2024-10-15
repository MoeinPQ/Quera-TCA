#include<iostream>
using namespace std;
int main()
{
    string a,Operator,b;
    cin >> a >> Operator >> b;
    if(Operator == "+"){
        if(a.length() > b.length()){
            a[a.length()-b.length()] = '1';
            cout << a;
        }else if(a.length() < b.length()){
            b[b.length() - a.length()] = '1';
            cout << b;
        }else{
            a[0] = '2';
            cout << a;
        }
    }else{
        int l=b.length();
        for (int i = 0; i < l-1; i++)
        {
            a += "0";
        }
        cout << a;
    }

}

// solved.