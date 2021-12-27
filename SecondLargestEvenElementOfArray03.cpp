#include "bits/stdc++.h"
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }


    // Sorting : 
    // for(int i=1; i<n; i++){
    //     int temp =arr[i];
    //     int j=i-1;
    //     while(j>=0 && arr[j]>temp){
    //         arr[j+1]=arr[j];
    //         j--;
    //     }
    //     arr[j+1]=temp;
    // }
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }

    cout<<"\n";
    int count=0;
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            // cout<<arr[i]<<" ";
            count++;
            for(int i=0; i<count; i++){
                cout<<arr[count-2];
                
            }
        }

    }

    int count=0;
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            count++;
        }
    }
    for(int i=1; i<count; i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    cout<<"\n";
    return 0;
}