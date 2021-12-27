#include<iostream>
#include<math.h>
using namespace std;
int greatest(int arr[], int n){
    int maxKey=-9999;
    for(int i=0; i<n; i++){
        maxKey=max(maxKey, arr[i]);
    }
    return maxKey;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<greatest(arr, n);
    return 0;
}