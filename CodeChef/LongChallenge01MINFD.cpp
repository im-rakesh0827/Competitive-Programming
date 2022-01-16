#include "bits/stdc++.h"
using namespace std;
int main(){
    int T; cin>>T;
    while(T--){
        int N, X;
        cin>>N>>X;
        int arr[N];
        for(int i=0; i<N; i++){
            cin>>arr[i];
        }
        sort(arr, arr+N, greater<int>());
        int sum=0, count=0;
        bool flag = false;
        for(int i=0; i<N; i++){
            sum+=arr[i];
            count++;
            if(sum>=X){
                flag=true;
                break;
            }
        }
        if(flag){
            cout<<count<<"\n";
        }else{
            cout<<"-1\n";
        }
    }
    return 0;
}

//Question link : https://www.codechef.com/JAN222C/problems/MINFD

//Input : 
// 4
// 4 6
// 4 3 5 1
// 3 15
// 1 5 3
// 2 5
// 10 3
// 4 7
// 1 2 3 4


//Output :
// 2
// -1
// 1
// 2