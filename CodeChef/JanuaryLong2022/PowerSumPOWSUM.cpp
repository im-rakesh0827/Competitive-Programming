#include "bits/stdc++.h"
using namespace std;
int main(){
    int T; cin>>T;
    while(T--){
        int n; cin>>n;
        int arr[n], d[n];
        int s = 0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            d[i]=arr[i];
            s+=arr[i];
        }
        sort(arr, arr+n);
        int b = ceil(log2(s));
        auto c = find(d, d+n, arr[0]);
        int j = ((pow(2, b)-s)+arr[0])/arr[0];
        if((s&s-1)==0){
            cout<<0<<"\n";
        }else{
            cout<<1<<"\n";
            cout<<1<<" "<<j<<"\n";
            cout<<(distance(d, c))+1<<"\n";
        }


    }
    return 0;
}

//Question link : https://www.codechef.com/JAN222C/problems/POWSUM

//Input :
// 2
// 4
// 4 8 4 32
// 3
// 2 2 4

//Output :
// 1
// 3 2
// 1 2 3
// 0

