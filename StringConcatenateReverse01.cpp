#include "bits/stdc++.h"
using namespace std;
int main(){
    string S1;
    cin>>S1;
    string S2;
    cin>>S2;
    string S3 = S1+S2;
    int n= S3.length();
    string reverse = "";
    for(int i=n-1; i>=0; i--){
        reverse+=S3[i];
    }
    cout<<reverse<<"\n";
    return 0;
}
