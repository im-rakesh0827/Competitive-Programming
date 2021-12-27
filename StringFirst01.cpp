#include "bits/stdc++.h"
using namespace std;
int main(){
    string s;
    getline(cin, s);
    // int pos1, pos2;
    // cin>>pos1;
    // cin>>pos2;
    // for(int i=pos1; i<=pos2; i++){
    //     cout<<s[i];
    // }
    char c;
    cin>>c;
    int count=0;
    int n=s.length();
    for(int i=0; i<n; i++){
        if(c==s[i]){
            count++;
        }
    }
    cout<<count<<"\n";
    return 0;
}