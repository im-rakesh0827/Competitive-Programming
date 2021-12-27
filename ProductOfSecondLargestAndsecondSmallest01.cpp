#include "bits/stdc++.h"
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=1; i<n; i++){
        int temp = arr[i];
        int j=i-1;
        while(arr[j]>temp && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    for(int i=0; i<n; i++){
        // int result = arr[1]*arr[n-2];
        cout<<arr[n-2]*arr[i+1]<<"\n";
        break;
    }
    return 0;
}