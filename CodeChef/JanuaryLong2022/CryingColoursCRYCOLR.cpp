#include "bits/stdc++.h"
using namespace std;
int main(){
    int T; cin>>T;
    while(T--){
        int n; cin>>n;
        int arr[10][10];
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cin>>arr[i][j];
            }
        }
        int sum = arr[2][0]+arr[2][1]+arr[1][0];
        int sum1 = arr[0][1]+arr[0][2]+arr[1][2];
        if(arr[0][0]==n && arr[1][1]==n && arr[2][2]==n){
            cout<<"0\n";
        }else{
            cout<<max(sum, sum1)<<"\n";
        }
    }
    return 0;
}

//Question link : https://www.codechef.com/JAN222C/problems/CRYCOLR

//Input :
// 2
// 3
// 3 0 0
// 0 3 0
// 0 0 3
// 5
// 2 1 2
// 1 4 0
// 2 0 3

//Output :
// 0
// 3
