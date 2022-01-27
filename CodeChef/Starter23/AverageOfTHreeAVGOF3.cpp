#include "bits/stdc++.h"
using namespace std;
int main(){
    int T; cin>>T;
    while(T--){
        int n; cin>>n;
        // n = ((n-1) + n + (n+1))/3 : 
        cout<<(n-1)<<" "<<n<<" "<<n+1<<"\n";
    }
    return 0;
}

//Question link : https://www.codechef.com/START23C/problems/AVGOF3


// Input : 
// 3
// 3
// 5
// 5


// Output : 
// 2 3 4
// 4 5 6
// 4 5 6
