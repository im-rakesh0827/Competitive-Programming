#include "bits/stdc++.h"
using namespace std;
int main(){
    int T; cin>>T;
    while(T--){
        int N; cin>>N;
        int arr[N];
        for(int i=0; i<N; i++){
            cin>>arr[i];
        }
        int sum = 0;
        for(int i=0; i<N; i++){
            sum+=arr[i];
        }
        //Both the sister can only be happy, when the sum of all the candies is odd :
        if(sum%2==0){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
    }
    return 0;
}

//Question Link : https://www.codechef.com/problems/CNDLOVE


//Input : 
// 1
// 2
// 5 2

//Output : 
//YES