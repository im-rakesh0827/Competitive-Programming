// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%3==0 && n>=9){
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n/3; i++){
            cout<<a[i]<<" ";
        }
        for(int i=(2*n/3)-1; i>=n/3; i--){
            cout<<a[i]<<" ";
        }
        for(int i=(2*n/3); i<n; i++){
            cout<<a[i]<<" ";
        }
    }else{
        cout<<"Invalid input : ";
    }
    cout<<"\n";
    return 0;
}