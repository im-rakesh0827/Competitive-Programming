#include "bits/stdc++.h"
using namespace std;
int main(){
	string s; cin>>s;
	string temp = s;
    for(int i=0; i<s.length()/2; i++){
        char c = s[i];
        s[i] = s[s.length()-1-i];
        s[s.length()-1-i] = c;
    }
    if(s==temp){
        cout<<"Yes";
    }else{
        cout<<"No";
    }

    return 0;
}