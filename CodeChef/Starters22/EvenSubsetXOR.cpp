#include "bits/stdc++.h"
using namespace std;
int main(){
    int T; cin>>T;
    while(T--){
        int n; cin>>n;
        int c, x, j=0, i=1;
        long long int a[1000];
        while(j!=n){
            c=0;
            x=i;
            while(x!=0){
                x=x&(x-1);
                c++;
            }
            if(c%2==0){
                a[j]=i;
                j++;
            }
            i++;
        }
        for(int i=0; i<j; i++){
            cout<<a[i]<<" ";
        }
        cout<<"\n";

    }
    return 0;
}