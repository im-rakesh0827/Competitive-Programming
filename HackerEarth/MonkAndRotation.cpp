#include "bits/stdc++.h"
using namespace std;
int main(){
    int T; cin>>T;
    while(T--){
        int n, d;
        cin>>n>>d;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int index = n-d;
        for(int i=index; i<n; i++){
            cout<<arr[i]<<" ";
        }
        for(int i=0; i<index; i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}



//Question link : https://www.hackerearth.com/practice/codemonk/