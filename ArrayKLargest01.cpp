#include "bits/stdc++.h"
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n<0){
        cout<<"Invalid input : \n";
    }else{
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
        sort(arr, arr+n);
        int k;
        cin>>k;
        if(k>n){
            cout<<"Invalid input : \n";
        }else{
            for(int i=n-1; i>=n-k; i--){
                cout<<arr[i]<<" ";
            }
        }
    }
    cout<<"\n";
    return 0;
}