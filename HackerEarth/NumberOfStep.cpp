#include "bits/stdc++.h"
using namespace std;
int main(){
	int n; cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
    int b[n];
    for(int i=0; i<n; i++){
        cin>>b[i];
    }

    bool flag=false;
    int count=0;
    for(int i=0; i<n; i++){
        if(a[i]>=b[i]){
            a[i] = a[i]-b[i];
            count++;
        }else{
            flag = false;
            break;
        }

    }

    // for(int i=0; i<n; i++){
    //     for(int j=i+1; i<n; i++){
    //         if(a[i]==a[j]){
    //             flag = true;
    //         }
    //     }
    //     break;
    // }

    // if(flag){
    //     cout<<count;
    // }else{
    //     cout<<-1;
    // }

    cout<<count;
    return 0;
}