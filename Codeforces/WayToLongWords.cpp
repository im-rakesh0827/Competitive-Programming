#include "bits/stdc++.h"
using namespace std;
int main(){
    int T; cin>>T;
    while(T--){
        string s;
        cin>>s;
        int n = s.length();
        if(n>10){
            cout<<s[0]<<n-2<<s[n-1]<<"\n";
        }else{
            cout<<s<<"\n";
        }

    }
    return 0;
}

// Question link : https://codeforces.com/contest/71/problem/A



// Input : 
// 4
// word
// localization
// internationalization
// pneumonoultramicroscopicsilicovolcanoconiosis

// Output : 
// word
// l10n
// i18n
// p43s


