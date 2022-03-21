#include "bits/stdc++.h"
using namespace std;
class Solution{
    public:
    int smallestElement(int arr[], int size, int pos){
        // for(int i=1; i<size; i++){
        //     int temp=arr[i];
        //     int j=i-1;
        //     while(j>=0 && arr[j]>temp){
        //         arr[j+1]=arr[j];
        //         j--;
        //     }
        //     arr[j+1]=temp;
        // }
        // return arr[pos-1];

        sort(arr, arr+size);
        return arr[pos-1];

    }

};
int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k; cin>>k;
    Solution s;
    cout<<s.smallestElement(arr, n, k)<<"\n";
    return 0;
}


// Question : https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1/?page=1&category[]=Arrays&sortBy=submissions#

// Input : 
// 6
// 7 10 4 3 20 15
// 3
// Output : 7