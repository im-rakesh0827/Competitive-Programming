#include "bits/stdc++.h"
using namespace std;
int main(){
    int T; cin>>T;
    while(T--){
        string s[] = {"A", "B", "C", "NOTA"};
        int n=3;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int index=0;
        bool flag = false;
        for(int i=0; i<n; i++){
            if(arr[i]>50){
                index=i;
                flag = true;
            }
        }
        if(flag){
            cout<<s[index]<<"\n";
        }else{
            cout<<"NOTA\n";
        }
    }
    return 0;
}

//Question link : https://www.codechef.com/START22C/problems/ELECTIONS

//Input :
// 3
// 80 19 2
// 20 55 26
// 50 1 50

//Output :
// A
// B
// NOTA
