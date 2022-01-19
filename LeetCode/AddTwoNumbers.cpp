#include "bits/stdc++.h"
using namespace std;
int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int m; cin>>m;
    int brr[m];
    for(int i=0; i<m; i++){
        cin>>brr[i];
    }
    int num1=0;
    for(int i=n; i>=0; i--){
        num1  = num1*10+arr[i];
    }
    int num2 = 0;
    for(int i=m; i>=0; i--){
        num2 = num2*10+brr[i];
    }

    int ans = num1+num2;
    vector<int> v;
    while(ans>0){
        int res = ans%10;
        v.push_back(res);
        ans/=10;
    }
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
    return 0;
}



//Input :
// 3
// 2 4 3
// 3
// 5 6 4

//Output : 7 0 8
