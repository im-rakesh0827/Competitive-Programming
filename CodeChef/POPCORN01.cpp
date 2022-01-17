#include "bits/stdc++.h"
using namespace std;
int main(){
    int T; cin>>T;
    while(T--){
        int N=3;
        vector<int>v;
        while(N--){
            int a, b;
            cin>>a>>b;
            v.push_back(a+b);
        }
        sort(v.begin(), v.end());
        cout<<v[v.size()-1]<<"\n";
    }
    return 0;
}

//Question link : https://www.codechef.com/EXUN21C/problems/POPCORN

//Input : 
// 3
// 3 6
// 5 10
// 8 7
// 99 1
// 55 55
// 33 51
// 54 146
// 5436 627
// 1527 5421

//Output : 
// 15
// 110
// 6948

