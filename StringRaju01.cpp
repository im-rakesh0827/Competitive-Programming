#include "bits/stdc++.h"
using namespace std;
int main(){
    string s;
    getline(cin, s);
    int n=s.length();
    int hash, sterix;
    for(int i=0; i<n; i++){
        if(s[i]=='#'){
            hash++;
        }else if(s[i]=='*'){
            sterix++;
        }
    }
    if(hash==sterix){
        cout<<0<<"\n";
    }else if(hash>sterix){
        cout<<1<<"\n";
    }else{
        cout<<-1<<"\n";
    }
    return 0;
}