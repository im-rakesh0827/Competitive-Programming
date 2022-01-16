#include "bits/stdc++.h"
using namespace std;
int main(){
    int T; cin>>T;
    while(T--){
        int N; cin>>N;
        int count = 0;
        while(N--){
            int s_time, j_time;
            cin>>s_time>>j_time;
            if((j_time-s_time)>5){
                count++;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}

//Question link : https://www.codechef.com/problems/JDELAY

//Input : 
// 1
// 5
// 1 3 : 3-1 = 2
// 4 4 : 4-4 = 0
// 4 10 : 10-4 = 6
// 1 11 : 11-1 = 10
// 2 7 : 7-2 = 5

//Output : 2