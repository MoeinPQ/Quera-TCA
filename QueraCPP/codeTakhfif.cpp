#include<iostream>
using namespace std;
string removeDuplicates(string str);
int main(){
    int t;
    string zirAlefba;
    cin >> t >> zirAlefba;
    string codeHa[t];
    string result[t];
    zirAlefba = removeDuplicates(zirAlefba);
    cout << zirAlefba;
    for (int i = 0; i < t; i++)
    {
        cin >> codeHa[i];
        // cout << codeHa[i] << endl;
        codeHa[i] = removeDuplicates(codeHa[i]);
        // cout << codeHa[i];
        int k = 0;
        
        for(int h=0;h < zirAlefba.length();h++){
            for (int j = 0; j < codeHa[i].length(); j++){
                if(zirAlefba[h] == codeHa[i][j])
                {
                    k++;
                }

            }
        }
        
        if(k == codeHa[i].length()){
            result[i] = "Yes";
        }else{
            result[i] = "No";
        }
        
    }
    for(int i=0;i<t;i++){
        cout << result[i] << endl;
    }
}


string removeDuplicates(string str) {
    int n = str.size();

    // To store all characters present in the string
    int count[256] = {0};

    // Traverse through the string and count the occurrences of each character
    for (int i = 0; i < n; i++)
        count[str[i]]++;

    string res = "";
    // Traverse through the string again and append only one instance of those characters to the result string
    // that occur more than once
    for (int i = 0; i < n; i++) {
        if (count[str[i]] > 1) {
            res += str[i];
            count[str[i]] = 0; // reset the count so that we don't append the same character again
        }
        else if (count[str[i]] == 1) {
            res += str[i];
        }
    }

    return res;
}
