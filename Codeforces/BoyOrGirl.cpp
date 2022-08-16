#include "bits/stdc++.h"
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.length();
    int count=0;
    for(int i=0;i<n; i++){
        for(int j=i+1; j<n; j++){
            if(s[i]==s[j]){
                count++;
            }
        }
    }
    int distinct = n-count;

    if(distinct%2!=0){
        cout<<"IGNORE HIM!\n";
    }else{
        cout<<"CHAT WITH HER!\n";
    }
    return 0;
}