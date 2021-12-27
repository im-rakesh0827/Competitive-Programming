#include "bits/stdc++.h"
using namespace  std;
int main(){
    // string s="Apple";
    string s;
    cin>>s;
    int n = s.length();
    // int n = sizeof(s);
    string r = "";
    for(int i=n-1; i>=0; i--){
        r+=s[i];
    }
    cout<<r<<"\n";
    // main();
    // return 0;
}
