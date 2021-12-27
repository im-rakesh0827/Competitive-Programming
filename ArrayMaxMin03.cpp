//WAP to take two array as input and print product of max(evenSum, oddSum) of first array and min(evenSum, oddSum) of second array : 
#include "bits/stdc++.h"
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    if(n<0){
        cout<<"Invalid inpt : \n";
    }
    else{
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int evenSum=0, oddSum=0;
        for(int i=0; i<n; i++){
            if(arr[i]%2==0){
                evenSum+=arr[i];
            }else{
                oddSum+=arr[i];
            }
        }
        int maxKey = max(evenSum, oddSum);
        int m;
        cin>>m;
        if(m<0){
            cout<<"Invalid input : \n";
        }else{
            int brr[m];
            for(int i=0; i<m; i++){
                cin>>brr[i];
            }
            int evenSum1=0, oddSum1=0;
            for(int i=0; i<m; i++){
                if(brr[i]%2==0){
                    evenSum1+=brr[i];
                }else{
                    oddSum1+=brr[i];
                }
            }
            int minKey = min(evenSum1, oddSum1);
            int product = maxKey*minKey;
            cout<<product<<"\n";
        }
    }
    return 0;
}