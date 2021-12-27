#include "bits/stdc++.h"
using namespace std;
int kthLargest(int arr[], int no, int l){
    sort(arr, arr+no);
    // return arr[no-l];
    // int sum = arr[l-1]+arr[no-l];
    return arr[no-l];
}
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


        //Sorting : 
        // for(int i=1; i<n; i++){
        //     int temp = arr[i];
        //     int j=i-1;
        //     while(j>=0 && arr[j]>temp){
        //         arr[j+1]=arr[j];
        //         j--;
        //     }
        //     arr[j+1]=temp;
        // }



        //Sorting : 
        // sort(arr, arr+n);
        int k;
        cin>>k;
        // cout<<arr[n-k]<<"\n";
        cout<<kthLargest(arr, n, k)<<"\n";
    }
    return 0;
}