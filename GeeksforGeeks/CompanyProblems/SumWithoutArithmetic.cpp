#include "bits/stdc++.h"
using namespace std;
class Solution{
    public:
    int sumWithoutArithmetic(int a, int b){
        // for(int i=0; i<b; i++){
        //     a++;
        // }
        while(b--){
            a++;
        }
        return a;
    }

};
int main(){
    int T; cin>>T;
    while(T--){
        int x, y;
        cin>>x>>y;
        Solution ob;
        cout<<ob.sumWithoutArithmetic(x, y)<<"\n";

    }
    return 0;
}