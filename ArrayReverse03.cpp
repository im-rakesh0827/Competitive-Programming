#include "bits/stdc++.h"
using namespace std;
 int main(){
     int n;
     cin>>n;
     int arr[n];
     if(n<0){
         cout<<"Invalidinput : \n";
     }
     else{
         for(int i=0; i<n; i++){
             cin>>arr[i];
         }
         int k;
         cin>>k;
         if(k<0 || k>n){
             cout<<"Invalid input : \n";
         }
         else{
             for(int i=n-1; i>k; i--){
                 cout<<arr[i]<<" ";
             }
             for(int i=k; i>=0; i--){
                cout<<arr[i]<<" ";
            }
        }
    }
    cout<<"\n";
    return 0;
}