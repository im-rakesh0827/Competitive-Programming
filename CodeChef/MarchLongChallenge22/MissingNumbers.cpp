#include "bits/stdc++.h"
using namespace std;
int main(){
    int T; cin>>T;
    while(T--){
        int n=4;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int a, b;
        int N = pow(10, 4);
        int count=0;
        vector<int>v;
        for(int i=1; i<N; i++){
            a=i; 
            for(int j=1; j<N; j++){
                b=j;
                v.push_back(a+b);
                v.push_back(a-b);
                v.push_back(a*b);
                v.push_back(a/b);
            }

        }
        if(count==n){
            cout<<a<<" "b<<"\n";
        }





    }
    return 0;
}