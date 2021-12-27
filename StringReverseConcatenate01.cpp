#include "bits/stdc++.h"
using namespace std;
int main(){
    string S1;
    cin>>S1;
    string S2;
    cin>>S2;
    int n1=S1.length();
    string r1 = "";
    for(int i=n1-1; i>=0; i--){
        r1+=S1[i];
    }
    int n2 = S2.length();
    string r2 = "";
    for(int i=n2-1; i>=0; i--){
        r2+=S2[i];
    }
    cout<<r2<<r1<<"\n";
    return 0;
}
