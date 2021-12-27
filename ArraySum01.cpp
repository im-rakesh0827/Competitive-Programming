#include "bits/stdc++.h"
using namespace std;
int main(){
    freopen("input.in", "r", stdin);
    freopen("output.in", "w", stdout);
    int T; cin>>T;
    while(T!=0){
        int n; cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int sum=0;
        for(int i=0; i<n; i++){
            sum+=arr[i];
        }
        cout<<sum<<"\n";
        T--;
    }
}