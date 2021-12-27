#include "bits/stdc++.h"
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n>2){
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        // for(int i=1; i<n; i++){
        //     int temp = arr[i];
        //     int j=i-1;
        //     while(j>=0 && arr[j]>temp){
        //         arr[j+1]=arr[j];
        //         j--;
        //     }
        //     arr[j+1]=temp;
        // }
        // for(int i=0; i<n; i++){
        //     cout<<arr[n-2]+arr[1]<<"\n";
        //     break;
        // }
        sort(arr, arr+n);
        cout<<arr[n-2]+arr[1]<<"\n";
    }
    return 0;
}